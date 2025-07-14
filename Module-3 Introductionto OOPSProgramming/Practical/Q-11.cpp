// Q 11. Write a program that prints a right-angled triangle using stars (*) with a nested loop.
// Objective: Learn nested control structures.

#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter number of rows for the triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

// Explanation:
//  Outer loop (i) controls the number of rows.
//  Inner loop (j) prints stars on each row.