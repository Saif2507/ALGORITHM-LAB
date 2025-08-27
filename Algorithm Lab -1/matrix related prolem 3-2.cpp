//the row parameter of the matrix as a default argument.
#include <iostream>
using namespace std;

int main( ) {
    int cols,rows=3;
    cout << "Enter number of columns: ";
    cin >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for (" << i+1 << "," << j+1 << "): ";
            cin >> matrix[i][j];
        }

    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

