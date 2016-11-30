#include "BaseComponent.hpp"

BaseComponent::BaseComponent(int f_type=0)
{
    funct_type = f_type;
}

float BaseComponent::computeOutput(float in1, float in2)
{
    float output = 0;
    if(funct_type == 0)
        {
        output =  in1 + in2;
    }
    else if(funct_type == 1)
    {
        output =  in1 - in2;
    }
    else if(funct_type == 2)
    {
        output =  in1 * in2;
    }
    else if(funct_type == 3)
    {
        output =  in1 / in2;
    }
    return output;
}
