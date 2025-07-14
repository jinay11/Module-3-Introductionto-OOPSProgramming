// Q 2. Write a C++ program that accepts user input for their name and age and then displays a
// personalized greeting.
// Objective: Practice input/output operations using cin and cout.

#include <iostream>
using namespace std;

int main()
{

    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name; // read name

    cout << "Enter your age: ";
    cin >> age; // read age

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}

// Explanation: 
// cin is used to take input from the user. 
// cout is used to display output. 
// << is the insertion operator, >> is the extraction operator. 