// Q 20. Write a program that implements inheritance using a base class Person and derived classes
// Student and Teacher. Demonstrate reusability through inheritance.
// Objective: Learn the concept of inheritance.

#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    void setPersonDetails(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPersonDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class - Student
class Student : public Person
{
private:
    int rollNo;

public:
    void setStudentDetails(string n, int a, int r)
    {
        setPersonDetails(n, a); // reuse base class method
        rollNo = r;
    }

    void displayStudentDetails()
    {
        displayPersonDetails(); // reuse base class method
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived class - Teacher
class Teacher : public Person
{
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string s)
    {
        setPersonDetails(n, a); // reuse base class method
        subject = s;
    }

    void displayTeacherDetails()
    {
        displayPersonDetails(); // reuse base class method
        cout << "Subject: " << subject << endl;
    }
};

// Main function
int main()
{
    Student s1;
    Teacher t1;

    s1.setStudentDetails("Alice", 20, 101);
    t1.setTeacherDetails("Mr. Smith", 45, "Mathematics");

    cout << "\n--- Student Details ---" << endl;
    s1.displayStudentDetails();

    cout << "\n--- Teacher Details ---" << endl;
    t1.displayTeacherDetails();

    return 0;
}
