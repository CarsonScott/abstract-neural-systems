#ifndef SYSTEM_HPP_INCLUDED
#define SYSTEM_HPP_INCLUDED

#include <cmath>
#include "BaseComponent.hpp"
#include "Buffer.hpp"

#define Matrix std::vector<Array>

struct System
{
    std::vector<BaseComponent> components;
    std::vector<Buffer> buffers;
    Matrix inputs;
    Array comp_output;
    Array input_buffer;
    int output_component;

    bool is_valid(float);
    float normalize(float);
    void setInputs(Array);
    float computeOutput();
};

#endif // SYSTEM_HPP_INCLUDED
