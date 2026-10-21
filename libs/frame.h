// Header file of frame.c

#define DEBUG

typedef struct ML_Neuron{
    uint8_t value; //goes from 0 to 255, 1 byte is the minimum usage of memory we can do.
    uint8_t* weights; //We have a list of weights, relating this neuron to all the other neurons in the next layer.
} ML_Neuron;

ML_Neuron** ML_CreateNeuronLayers(uint64_t num_layers, uint32_t num_neurons);

ML_Neuron* ML_Run();

ML_Neuron** ML_partialDerivative(ML_Neuron* function);

typedef ML_Neuron* ML_Layer;
typedef ML_Neuron** ML_NeuralMap;