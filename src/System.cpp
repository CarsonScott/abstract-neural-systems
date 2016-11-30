#include "System.hpp"

bool System::isValid(float x)
{
    return (!std::isnan(x) && !std::isinf(x));
}

float System::normalize(float x)
{
    if(std::abs(x) > 1)
    {
        return x / std::abs(x);
    }
    return x;
}

void System::setInputs(Array in)
{
    for(int i = 0; i < in.size(); i++)
    {
        int index = to_input_buffers[i];
        buffers[index].setInput(in[i]);
    }
}

float System::computeOutput()
{
    for(int i = 0; i < buffers.size(); i++)
    {
        for(int j = 0; j < to_buffers[i].size(); j++)
        {
            int index = to_buffers[i][j];
            float input = component_outputs[index];
            buffers[i].setInput(input);
        }
    }

    Array c_out;
    for(int i = 0; i < components.size(); i++)
    {
        Array buffer_output = buffers[i].getOutput();
        float in1 = buffer_output[0];
        float in2 = buffer_output[1];

        float output = components[i].computeOutput(in1, in2);
        if(!isValid(output))
        {
            output = 0;
        }
        output = normalize(output);
        c_out.push_back(output);
    }

    component_outputs = c_out;
    return component_outputs[to_output_component];
}

