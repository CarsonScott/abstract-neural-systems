#include "System.hpp"

bool System::is_valid(float x)
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
        int index = input_buffer[i];
        buffers[index].setInput(in[i]);
    }
}

float System::computeOutput()
{
    for(int i = 0; i < buffers.size(); i++)
    {
        for(int j = 0; j < inputs[i].size(); j++)
        {
            int index = inputs[i][j];
            float input = comp_output[index];
            buffers[i].setInput(input);
        }
    }

    Array c_out;
    for(int i = 0; i < components.size(); i++)
    {
        Array buf_out = buffers[i].getOutput();
        float in1 = buf_out[0];
        float in2 = buf_out[1];

        float output = components[i].computeOutput(in1, in2);
        if(!is_valid(output))
        {
            output = 0;
        }
        output = normalize(output);
        c_out.push_back(output);
    }

    comp_output = c_out;
    return comp_output[output_component];
}

