#include "Buffer.hpp"

Buffer::Buffer(int required, int input=0)
{
    if(input == 0)
        input = required;

    max_size = input;
    required_outputs = required;

    for(int i = 0; i < max_size; i++){
        inputs.push_back(0);
    }
}

void Buffer::setInput(float input)
{
    if(inputs.size()+1 >= max_size)
    {
        inputs.erase(inputs.begin());
    }
    inputs.push_back(input);
}

Array Buffer::getOutput()
{
    Array outputs;
    for(int i = 0; i < required_outputs; i++)
    {
        outputs.push_back(inputs[i]);
    }
    return outputs;
}

