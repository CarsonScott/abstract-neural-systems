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

    Array component_outputs;

    Matrix to_buffers;
    Array to_input_buffers;
    int to_output_component;

    bool isValid(float);
    float normalize(float);
    void setInputs(Array);
    float computeOutput();
};

#endif // SYSTEM_HPP_INCLUDED
