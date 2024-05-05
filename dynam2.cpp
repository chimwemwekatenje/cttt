#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Prompt the user to enter dimensions of the array
    do {
        cout << "Enter the number of rows (not exceeding 3): ";
        cin >> rows;
        cout << "Enter the number of columns (not exceeding 3): ";
        cin >> cols;

        if (rows > 3 || cols > 3) {
            cout << "Dimensions exceed the limit of 3. Please try again." << endl;
        }
    } while (rows > 3 || cols > 3);

    // Dynamically allocate a 2D array of doubles
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }

    // Assign values to each element of the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Output the array
    cout << "The 2D array with the assigned values:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] dynamicArray[i];
    }
    delete[] dynamicArray;

    return 0;
}