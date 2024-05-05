#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt the user to assign a value to the dynamically allocated integer
    cout << "Enter integer value: ";
    cin >> *dynamicInt;

    // Prompt the user to assign a value to the dynamically allocated string
    cout << "Enter string value: ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, *dynamicString);

    // Output the values
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    // Deallocate memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}