#include <stdio.h>
#include "../libs/frame.c"

#define IMG_HEIGHT 28 //px
#define IMG_WIDTH 28 //px

#define NUMBER_OF_LAYERS 16
#define NEURONS_PER_LAYER (IMG_HEIGHT*IMG_WIDTH)

int main()
{
    ML_NeuralMap layers; //list of all neuron columns.

    layers = ML_CreateNeuronLayers(NUMBER_OF_LAYERS, NEURONS_PER_LAYER);
    
    return 0;
}