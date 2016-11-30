#ifndef BUFFER_HPP_INCLUDED
#define BUFFER_HPP_INCLUDED

#include <vector>

#define Array std::vector<float>

struct Buffer
{
    Array inputs;
    int max_size;
    int required_outputs;

    Buffer(int, int);
    void setInput(float);
    Array getOutput();
};

#endif // BUFFER_HPP_INCLUDED
