#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Matrix{
    uint32_t rows;
    uint32_t cols;
    float* values;
} Matrix;

Matrix Matrix_Create(uint32_t rows, uint32_t cols);
void Matrix_Sum(Matrix m1, Matrix m2, Matrix* m3);
uint32_t Matrix_Size(Matrix matrix);
void Matrix_WriteValue(Matrix matrix, uint32_t row, uint32_t col, float value);
void Matrix_Print(Matrix matrix);