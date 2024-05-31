#include <iostream>
using namespace std;

void areaofSquare() {
    double Side;
    cout << "Enter  side length : ";
    cin >> Side;
    double area = Side *Side;
    cout << "area of the square is: " << area << endl;
}
void areaofRectangle() {
    double Length;
    double Width;
    cout << "Enter Length : ";
    cin >> Length;
    cout << "Enter Width : ";
    cin >> Width;
    double area = Length * Width;
    cout << "area of the rectangle is: " << area << endl;
}
void areaofTriangle() {
    double Base;
    double Height;
    cout << "Enter the triangle base length: ";
    cin >> Base;
    cout << "Enter Height: ";
    cin >> Height;
    double area = 0.5 * Base * Height;
    cout << "area of the triangle is: " << area << endl;
}
int main() {
    char Choice;
    while(true)
    {
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Quit program\n";
        cout << "Enter  choice(1-4): ";
        cin >> Choice;

        switch (Choice) {
            case '1':
                areaofSquare();
                break;
            case '2':
                areaofRectangle();
                break;
            case '3':
                areaofTriangle();
                break;
            case '4':
            cout<<"Quit program"<<endl;
            return 0;
            default:
                cout << "Invalid Choice. please enter a number between 1 and 4." << endl;
        }

    } 
return 0;
}