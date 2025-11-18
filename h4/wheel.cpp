#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

Wheel::Wheel(){}

Wheel::Wheel(int sz, string tp) {
    type = tp;
    size = sz;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}
