// Q 12. Write a C++ program that defines functions for basic arithmetic operations (add, subtract,
// multiply, divide). The main function should call these based on user input.
// Objective: Practice defining and using functions in C++.

#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main()
{
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

// Explanation:
// Defines separate functions for each operation.
// main() takes user input and calls the appropriate function.