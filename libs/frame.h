// Header file of frame.c

struct Neuron{
    uint8_t value; //goes from 0 to 255, 1 byte is the minimum usage of memory we can do.
    uint8_t* weights; //We have a list of weights, relating this neuron to all the other neurons in the next layer.
};