#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Prompt the user to input dimensions for the 2D array
    do {
        cout << "Enter the number of rows (max 3): ";
        cin >> rows;
        if (rows > 3) {
            cout << "Invalid input. Maximum number of rows is 3. Please try again." << endl;
        }
    } while (rows > 3);

    do {
        cout << "Enter the number of columns (max 3): ";
        cin >> cols;
        if (cols > 3) {
            cout << "Invalid input. Maximum number of columns is 3. Please try again." << endl;
        }
    } while (cols > 3);

    // Dynamically allocate memory for the 2D array
    double** dynamicArray = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        dynamicArray[i] = new double[cols];
    }

    // Assign values to each element of the array using nested loops
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter the value for element [" << i << "][" << j << "]: ";
            cin >> dynamicArray[i][j];
        }
    }

    // Output the values of each element of the array
    cout << "Values of the 2D array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << dynamicArray[i][j] << "\t";
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