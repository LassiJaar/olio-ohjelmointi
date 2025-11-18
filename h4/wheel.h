#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int, string);
    string getType() const;
    void setType(const string &newType);
    int getSize() const;
    void setSize(int newSize);
};

#endif // WHEEL_H
