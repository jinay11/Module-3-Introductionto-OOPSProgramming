// Q 18. Write a C++ program that defines a class Calculator with functions for addition, subtraction,
// multiplication, and division. Create objects to use these functions.
// Objective: Introduce basic class structure.

#include <iostream>
using namespace std;

class Calculator
{
public:
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
};

int main()
{
    Calculator calc;
    float x = 12, y = 4;

    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

    return 0;
}

// Explanation:
// Defines a simple class Calculator with public member functions.
// Object calc is created to call these functions.