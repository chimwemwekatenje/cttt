#include "Rectangle.h"
#include<iostream>
Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;
}
Rectangle::~Rectangle() { 
}
void Rectangle::setLength(float LENGTH) {
    length = LENGTH;
}
void Rectangle::setWidth(float WIDTH) {
    width = WIDTH;
}

float Rectangle::getLength() {
    return length;
}
float Rectangle::getWidth() {
    return width;
}

float Rectangle::calculateArea() {
    return length * width;
}