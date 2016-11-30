#include "BaseComponent.hpp"

BaseComponent::BaseComponent(int f_type)
{
    function_type = f_type;
}

float BaseComponent::computeOutput(float in1, float in2)
{
    float output;
    if(function_type == 0)
    {
        output =  in1 + in2;
    }
    else if(function_type == 1)
    {
        output =  in1 - in2;
    }
    else if(function_type == 2)
    {
        output =  in1 * in2;
    }
    else if(function_type == 3)
    {
        output =  in1 / in2;
    }
    return output;
}
