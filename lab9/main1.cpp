#include<iostream>
#include "Triangle.h"
#include"rectangle.h"
using namespace std;
int main(){
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon* pPoly1=&rect;
    Polygon* pPoly2=&trgl;
    Polygon* pPoly3=&poly;
    pPoly1->SetValues(4,5);
    pPoly2->SetValues(4,5);
    pPoly3->SetValues(4,5);
    cout << rect.Area() << '\n';
    cout << trgl.Area() << '\n';
    cout << poly.Area() << '\n';


    return 0;

}