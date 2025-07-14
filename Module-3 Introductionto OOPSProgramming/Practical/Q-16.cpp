// Q 16. Write a C++ program to perform matrix addition on two 2x2 matrices.
// Objective: Practice multi-dimensional arrays.

#include <iostream>
using namespace std;

int main()
{
    int mat1[2][2], mat2[2][2], sum[2][2];

    // Input first matrix
    cout << "Enter elements of first 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> mat1[i][j];

    // Input second matrix
    cout << "Enter elements of second 2x2 matrix:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            cin >> mat2[i][j];

    // Calculate sum
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    // Display result
    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
