#pragma once
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); 
    Rectangle(float LENGTH, float WIDTH); 
    ~Rectangle(); 

    void setLength(float LENGTH);
    void setWidth(float WIDTH);
    float getLength();
    float getWidth();

    float calculateArea();
};