#include <iostream>
using namespace std;

int main() {
    int rows;
    int columns;

    do {
        cout << "Enter rows number not exceeding 3: "<<endl;
        cin >> rows;
        cout << "Enter columns number not exceeding 3: "<<endl;
        cin >> columns;

        if (rows > 3 || columns > 3) {
            cout << "Dimensions exceed 3. Please try again" << endl;
        }
    } while (rows > 3 || columns > 3);

    int** myArray = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        myArray[i] = new int[columns];
    }

    cout << "Enter array values :" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << "Enter element value [" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
    }
    cout << " array with  assigned values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << myArray[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i) {
        delete[] myArray[i];
    }
    delete[] myArray;
    return 0;
}