// Q 7. Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators.
// Perform operations using each type of operator and display the results.
// Objective: Reinforce understanding of different types of operators in C++.

#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 3;

    // Arithmetic operators

    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    // Relational operators

    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical operators

    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;

    // Bitwise operators

    cout << "\nBitwise Operators:" << endl;
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 1: " << (a << 1) << endl;
    cout << "a >> 1: " << (a >> 1) << endl;

    return 0;
}

// Explanation: 

// Arithmetic operators: +, -, *, /, % 
// Relational operators: ==, !=, >, < 
// Logical operators: &&, ||, ! 
// // Bitwise operators: &, |, ^, ~, <<, >>