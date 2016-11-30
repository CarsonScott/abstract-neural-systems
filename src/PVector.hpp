#ifndef PVECTOR_HPP_INCLUDED
#define PVECTOR_HPP_INCLUDED

class PVector
{
public:
    float x;
    float y;

    PVector(float newX=0, float newY=0)
    {
        x = newX;
        y = newY;
    }
};

PVector operator +(PVector a, PVector b)
{
    return PVector(a.x+b.x, a.y+b.y);
}
PVector operator -(PVector a, PVector b)
{
    return PVector(a.x-b.x, a.y-b.y);
}
PVector operator *(PVector a, PVector b)
{
    return PVector(a.x*b.x, a.y*b.y);
}
PVector operator +(PVector a, float val)
{
    return PVector(a.x+val, a.y+val);
}
PVector operator -(PVector a, float val)
{
    return PVector(a.x-val, a.y-val);
}
PVector operator *(PVector a, float val)
{
    return PVector(a.x*val, a.y*val);
}

#endif // PVECTOR_HPP_INCLUDED
