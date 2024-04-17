#include <iostream>
 using namespace std;

 int main() {
 int a{7}; // initialize a with 7
 int* aptr =&a;

 cout << "The address of a is " <<&a 
 << "\nThe value of aPtr is " << aptr;
 cout << "\n\nThe value of a is " << a
 << "\nThe value of *aPtr is " <<*aptr << endl;
} 
