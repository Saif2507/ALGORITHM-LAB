//Given two matrices A (Dimension m*n) and B (Dimension n*p), perform matrix multiplication and return the resulting matrix.

#include <iostream>
using namespace std;

int main() {
    int m, n, p,A[100][100], B[100][100], C[100][100];
    cout << "Enter number of rows and columns of matrix A (m n): ";
    cin >> m >> n;
    cout << "Enter number of columns of matrix B (p): ";
    cin >> p;

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            cin >> B[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            for (int k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nResulting matrix C (dimension " << m << "x" << p << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
