// Q 13. Write a C++ program that calculates the factorial of a number using recursion.
// Objective: Understand recursion in functions.

#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n <= 1)
        return 1; // base case
    else
        return n * factorial(n - 1); // recursive call
}

int main()
{

    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    if (num < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}

// Explanation:
// factorial() function calls itself until it reaches 1.
// Demonstrates how recursion breaks a problem into smaller parts.