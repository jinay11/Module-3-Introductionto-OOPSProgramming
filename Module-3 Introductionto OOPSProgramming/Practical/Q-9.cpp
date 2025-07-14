// Q 9. Write a C++ program that asks the user to guess a number between 1 and 100. The program
// should provide hints if the guess is too high or too low. Use loops to allow multiple attempts.
// Objective: Understand while loops and conditional logic.

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main()
{

    srand(time(0));                      // seed random number generator
    int secretNumber = rand() % 100 + 1; // random number between 1 and 100
    int guess;

    cout << "Guess the number (between 1 and 100): ";

    while (true)
    {
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again: ";
        }
        else if (guess < secretNumber)
        {
            cout << "Too low! Try again: ";
        }
        else
        {
            cout << "Congratulations! You guessed the number." << endl;
            break; // exit the loop
        }
    }

    return 0;
}

// Explanation:

//  Uses rand() to generate a random number.
//  A while loop continues until the user guesses correctly.