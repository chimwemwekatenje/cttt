#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    float length;
    float width;
    Rectangle rectangle1;

    cout << "Enter length: ";
    cin >> length;
    rectangle1.setLength(length);

    cout << "Enter width: ";
    cin >> width;
    rectangle1.setWidth(width);

    cout << "Area of a rectangle: " << rectangle1.calculateArea() << endl;
    return 0;
}