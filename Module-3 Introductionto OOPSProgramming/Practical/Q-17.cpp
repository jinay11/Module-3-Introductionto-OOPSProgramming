// Q 17. Write a C++ program to check if a given string is a palindrome (reads the same forwards and
// backwards).
// Objective: Practice string operations.

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    bool isPalindrome = true;
    int len = str.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
// Explanation:
// Compares characters from start and end moving toward the center.
// If all match, it is a palindrome.