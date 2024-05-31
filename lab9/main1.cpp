#include<iostream>
#include "Rectangle1.h"
#include "Triangle1.h"

using namespace std;
int main(){
    Rectangle1 rect;
    Triangle1 trgl;
    rect.SetValues(4,5);
    trgl.SetValues(4,5);
    cout<<rect.Area()<<'\n';
    cout<<trgl.Area()<<'\n';
    return 0;
}