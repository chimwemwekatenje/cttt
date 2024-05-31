#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    float length;
    float width;
    
    
    Rectangle rect1;
    
    cout << "Enter length of first rectangle: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter width of first rectangle: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    cout << "\nEnter the length of the second rectangle: ";
    cin >> length;

    cout << "Enter the width of the second rectangle: ";
    cin >> width;

    Rectangle rect2(length, width);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}