#ifndef BUFFER_HPP_INCLUDED
#define BUFFER_HPP_INCLUDED

#include <vector>

#define Array std::vector<float>

struct Buffer
{
    Array store;
    int store_size;
    int required_outputs;

    Buffer(int, int);
    void setInput(float);
    Array getOutputs();
};

#endif // BUFFER_HPP_INCLUDED
