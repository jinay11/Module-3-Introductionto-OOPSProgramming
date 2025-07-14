// Q 8. Write a C++ program that takes a student’s marks as input and calculates the grade based on if
// else conditions.
// Objective: Practice conditional statements (if-else).

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter your marks (0-100): ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
// Explanation:
//  Uses if-else ladder to check marks and print appropriate grade.