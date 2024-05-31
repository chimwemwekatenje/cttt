#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
#include<iostream>
using namespace std;
using namespace shapes;

int main() {
    int choice;
    do {
        cout << "Choose an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                float side;
                cout << "enter side length of square: ";
                cin >> side;
                Square square(side);
                cout << "square area: " << Area::calculateArea(square) << endl;
                break;
            }
            case 2: {
                float base;
                float height;
                cout << "enter triangle base: ";
                cin >> base;
                cout << "enter triangle height: ";
                cin >> height;
                Triangle triangle(base, height);
                cout << "triangle area: " << Area::calculateArea(triangle) << endl;
                break;
            }
            case 3: {
                float radius;
                cout << "enter radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateArea(circle) << endl;
                break;
            }
            case 4:
                cout << "Exit program" << endl;
                break;
            default:
                cout << "please try again" << endl;
                break;
        }
    }
     while (choice != 4);
    return 0;
}
