#include "rectangle.h"

Rectangle::Rectangle() {}

double Rectangle::getArea(){
    double area;
    area = width * height;
    return area;
}

double Rectangle::getCircum(){
    double circ;
    circ = 2*(width + height);
    return circ;
}

void Rectangle::setWidth(double wh){
    width = wh;
}

void Rectangle::setHeight(double ht){
    height = ht;
}
