// Q 3. Write two small programs: one using Procedural Programming (POP) to calculate the area of a
// rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the
// same task.
// Objective: Highlight the difference between POP and OOP approaches.

// Procedural (POP) example:

// #include <iostream>
// using namespace std;

// int main()
// {

//     float length, width, area;

//     cout << "Enter length: ";
//     cin >> length;

//     cout << "Enter width: ";
//     cin >> width;

//     area = length * width;
//     cout << "Area of rectangle: " << area << endl;

//     return 0;
// }

// OOP example:
#include <iostream>
using namespace std;

class Rectangle
{
    float length, width;

public:
    void setData()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void calculateArea()
    {
        cout << "Area of rectangle: " << length * width << endl;
    }
};

int main()
{
    Rectangle rect;
    rect.setData();
    rect.calculateArea();

    return 0;
}


// Difference: 
// POP: uses simple functions and variables directly. 
// OOP: groups data and functions into a class to create objects.