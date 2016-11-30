#include "Buffer.hpp"

Buffer::Buffer(int required, int storage=0)
{
    required_outputs = required;
    if(storage == 0)
    {
        storage = required_outputs;
    }

    store_size = storage;
    for(int i = 0; i < store_size; i++)
    {
        store.push_back(0);
    }
}

void Buffer::setInput(float input)
{
    if(store.size()+1 >= store_size)
    {
        store.erase(store.begin());
    }
    store.push_back(input);
}

Array Buffer::getOutputs()
{
    Array outputs;
    for(int i = 0; i < required_outputs; i++)
    {
        outputs.push_back(store[i]);
    }
    return outputs;
}

