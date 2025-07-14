// Q 15. Write a C++ program that accepts an array of integers, calculates the sum and average, and
// displays the results.
// Objective: Understand basic array manipulation.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    int sum = 0;
    // Input array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
    
}

// Explanation:
//  Uses a simple for loop to input elements, compute sum, then divides by n for average