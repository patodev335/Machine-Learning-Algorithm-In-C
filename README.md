# Machine Learning Algorithm In C #

## Why? ##
Because I think in this day and age we need to actually leave behind our jobs and starting studying because of pure passion. AI will replace in 5 years me even if I graduate as an EE lol.

## What's the goal ##
This project aims to the making of a fully-working machine learning algorithm written in C with no
libraries besides the common ones given by the GNU project.
The objective of this is to learn how a machine learning algorithm works and after that go to
local LLM or generative models.

## How we do it ##
The basic idea is that we have an **image** which is represented through a **grid** of pixels *(rows x cols).* Therefore we can think that each pixel has a neuron associated with it and that it represents how much "on" the pixel is *(its brightness)*.
Then we can arrange some **layers** of these neurons, where we hope that the last one of them will describe which number was written in the first place.

* ### The Neuron Value ###
    Each neuron has a value, which will go from 0 to 1. How do we do this?
    We can use the **sigmoid** function, which is just a function that sends all real numbers to (0,1).
    I'll write the equation just below:

    $\sigma (x) = \frac{1}{1+e^{-x}}$

* ### How each neuron in the next layer is influenced by the layer before it

    Each neuron can be represented as the **linear combination** of the neurons before it.
    Each neuron must have a **weight** (w) that's correlated to the neuron we're trying to calculate.
    We can also **bias** (B) the sum, by just adding or substracting.
    After all that, we end up with a formula similar to this:

    $N_1 = \sigma ( w )$

***
**Author:** Patricio N. Monsalvo Canosa  
**Date:** October 16, 2026