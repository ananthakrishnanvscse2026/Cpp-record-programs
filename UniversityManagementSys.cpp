
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy constructor called" << endl;
    }

    // Member Function
    void display()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "---------------------" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2(101, "Arun");
    s2.display();

    Student s3(102, "Priya");
    s3.display();

    Student s4(s2);
    s4.display();

    return 0;
}
