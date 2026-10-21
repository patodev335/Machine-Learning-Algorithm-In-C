#include "matrix.h"

#define TEST_MATRIX


#ifdef TEST_MATRIX
int main()
{

    Matrix m1 = Matrix_Create(3,2);
    Matrix m2 = Matrix_Create(3,2);
    Matrix m3;

    printf("%d\n", Matrix_Size(m1));

    Matrix_WriteValue(m1, 0, 0, 1);
    Matrix_WriteValue(m1, 0, 1, 2);
    Matrix_WriteValue(m1, 1, 0, 3);
    Matrix_WriteValue(m1, 1, 1, 4);

    Matrix_WriteValue(m2, 0, 0, 5);
    Matrix_WriteValue(m2, 0, 1, 6);
    Matrix_WriteValue(m2, 1, 0, 7);
    Matrix_WriteValue(m2, 2, 1, 8);

    Matrix_Sum(m1,m2,&m3);

    Matrix_Print(m1);
    Matrix_Print(m2);
    Matrix_Print(m3);

    return 0;
}
#endif

Matrix Matrix_Create(uint32_t rows, uint32_t cols){
    Matrix ret;

    ret.rows = rows;
    ret.cols = cols;
    ret.values = calloc( rows*cols, sizeof(ret.values[0]));

    return ret;
}

void Matrix_Sum(Matrix m1, Matrix m2, Matrix* m3){

    if(m3 == NULL) return;
    (*m3) = Matrix_Create(m1.rows, m1.cols);
    if (m1.rows != m2.rows || m1.cols != m2.cols){
        printf("ERROR\t>>\tMatrix_Sum: CAN'T SUM DIFFERENT SIZE MATRICES || M1[%d,%d] * M2[%d,%d]\n", m1.rows, m1.cols, m2.rows, m2.cols);
        return;
    }
    
    for(int i=0; i < m1.rows; i++)
    {
        for(int j=0; j< m1.cols; j++)
        {
            Matrix_WriteValue(*m3, i, j, *(m1.values + m1.cols*i + j) + *(m2.values + m2.cols*i + j));
        }
    }
}

void Matrix_WriteValue(Matrix matrix, uint32_t row, uint32_t col, float value){
    if(matrix.rows > row && matrix.cols > col){
        *(matrix.values + matrix.cols*row + col) = value;
    }else{
        printf("ERROR\t>>\tMatrix_WriteValue: OUT OF INDEX || Matrix [%d, %d]... Input:(%d,%d)\n", matrix.rows, matrix.cols, row+1, col+1);
    }
}

uint32_t Matrix_Size(Matrix matrix)
{
    return matrix.cols*matrix.rows;
}

void Matrix_Print(Matrix matrix){
    for(int j=0; j<matrix.rows; j++)
    {
        printf("| ");
        for(int i =0; i<matrix.cols; i++)
        {
            printf("%f, ", *(matrix.values + matrix.cols*j + i) );
        }
        printf("|\n");
    }
    printf("\n");
}