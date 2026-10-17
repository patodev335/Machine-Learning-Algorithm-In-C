#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include "frame.h"

void Neuron_setValue(ML_Neuron* neuron, unsigned short value){
    if(value >= 0 && value <= 255) (*neuron).value = value;
    else{
        (*neuron).value = 0;
        printf(">> ERROR: Neuron_setValue (0-255) LIMIT EXCEEDED\n");
    }
}

ML_Neuron** ML_CreateNeuronLayers(uint64_t num_layers, uint32_t num_neurons){
    ML_Neuron** ret = malloc(sizeof(ML_Neuron*) * num_layers);

    if(ret == NULL){
        printf(">> ML_CreateNeuronLayers: Error assignating memory to layers array.\n");
        return NULL;
    }

    for(int j=0; j<num_layers; j++){
        ret[j] = malloc(sizeof(ML_Neuron)*num_neurons);
        if(ret[j] == NULL){
            printf(">> ML_CreateNeuronLayers: Error assignating memory to layer.\n");
            return NULL;
        }
        
        for(int i=0; i<num_neurons; i++){
            ret[j][i].value = 0;
            ret[j][i].weights = calloc(sizeof(ret[j][i].weights[0]), num_neurons);
        }
    }

#ifdef DEBUG
    printf("\t>> ML_CreateNeuronLayers: Neural Map created");
#endif

    return ret;
}