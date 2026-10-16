#include <stdio.h>
#include "../libs/frame.c"

int main()
{

    Neuron test;
    Neuron_setValue(&test, 128);
    printf("%d", test.value);

    return 0;
}