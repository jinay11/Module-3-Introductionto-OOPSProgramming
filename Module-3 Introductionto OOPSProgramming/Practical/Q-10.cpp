// Q 10. Write a C++ program to display the multiplication table of a given number using a for loop.
// Objective: Practice using loops.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;
    cout << "Multiplication table of " << num << ":\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }

    return 0;

}

// Explanation: 
// Uses a for loop from 1 to 10 to print the table.