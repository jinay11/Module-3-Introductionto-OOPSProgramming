// Q 14. Write a program that demonstrates the difference between local and global variables in C++.
// Use functions to show scope.
// Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

int globalVar = 100; // global variable

void displayScope()
{

    int localVar = 50; // local to this function
    cout << "Inside function - Local variable: " << localVar << endl;
    cout << "Inside function - Global variable: " << globalVar << endl;
}

int main()
{

    int localVar = 20; // local to main
    cout << "Inside main - Local variable: " << localVar << endl;
    cout << "Inside main - Global variable: " << globalVar << endl;
    displayScope(); // call function to show scope

    return 0;
}

// Explanation:
//  globalVar is accessible anywhere in the program.
//  localVar inside main() is different from localVar inside displayScope().
//  Shows how scope limits visibility of variables.