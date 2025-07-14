// Q 6.  Write a C++ program that performs both implicit and explicit type conversions and prints the
// results.
// Objective: Practice type casting in C++.

#include <iostream>
using namespace std;

int main()
{

    int intVar = 10;
    double doubleVar = 5.75;

    // Implicit conversion: int to double

    double sum = intVar + doubleVar;
    cout << "Implicit conversion (int + double): " << sum << endl;

    // Explicit conversion: double to int

    int intSum = intVar + (int)doubleVar;
    cout << "Explicit conversion (int + (int)double): " << intSum << endl;

    // Using static_cast for explicit type conversion
    int castResult = static_cast<int>(doubleVar);
    cout << "static_cast<double to int>: " << castResult << endl;

    return 0;
}

// Explanation: 
// Implicit conversion: C++ automatically converts int to double in expressions. 
// Explicit conversion (type casting): we force conversion using (int) or static_cast<int>().