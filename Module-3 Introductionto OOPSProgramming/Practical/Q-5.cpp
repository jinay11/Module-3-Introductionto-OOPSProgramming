// Q 5. Write a C++ program that demonstrates the use of variables and constants. Create variables of
// different data types and perform operations on them.
// Objective: Understand the difference between variables and constants.

#include <iostream>
using namespace std;

int main()
{

    int age = 25;
    float height = 5.9;
    char grade = 'A';
    string name = "John";
    const double PI = 3.1416;

    age = age + 5;
    height = height - 0.1;
    cout << "Name: " << name << endl;
    cout << "Updated Age: " << age << endl;
    cout << "Updated Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of constant PI: " << PI << endl;

    return 0;
}

// Explanation:
// Variables can change during program execution.
// Constants (const) cannot be modified after they are defined.