#ifndef BASECOMPONENT_HPP_INCLUDED
#define BASECOMPONENT_HPP_INCLUDED

struct BaseComponent
{
    int funct_type;

    BaseComponent(int);
    float computeOutput(float, float);
};

#endif // BASECOMPONENT_HPP_INCLUDED
