// Q 19. Create a class BankAccount with data members like balance and member functions like deposit
// and withdraw. Implement encapsulation by keeping data members private.
// Objective: Understand encapsulation in classes.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance)
    {
        balance = initialBalance;
    }

    void deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void displayBalance()
    {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    BankAccount myAccount(1000); // create account with initial balance
    myAccount.displayBalance();
    myAccount.deposit(500);
    myAccount.withdraw(200);
    myAccount.withdraw(2000); // test insufficient balance
    myAccount.displayBalance();

    return 0;
}

// Explanation
// Encapsulation: balance is private and accessed/modified only via public functions deposit,
// withdraw, and displayBalance.