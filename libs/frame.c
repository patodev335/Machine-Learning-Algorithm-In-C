#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "frame.h"

void Neuron_setValue(Neuron* neuron, unsigned short value){
    if(value >= 0 && value <= 255) (*neuron).value = value;
    else{
        (*neuron).value = 0;
        printf(">> ERROR: Neuron_setValue (0-255) LIMIT EXCEEDED\n");
    }
}