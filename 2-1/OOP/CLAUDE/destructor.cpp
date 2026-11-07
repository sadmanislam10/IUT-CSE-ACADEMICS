#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int id;
    float cgpa;

public:
    // default constructor : no parameters
    Student()
    {
        name = "Unknown";
        id = 0;
        cgpa = 0;
        cout << "Default constructor called\n";
    }

    // parameterized constructor
    Student(string n, int i, float c)
    {
        name = n;
        id = i;
        cgpa = (c >= 0 && c <= 4.0) ? c : 0;
        cout << "Parameterized Constructor Called\n";
    }

    ~Student()
    {
        cout << "Destructor called for " << name << "\n";
    }

    void print()
    {
        cout << name << "\n"
             << id << "\n"
             << cgpa << "\n";
    }
};
int main()
{
    Student a;
    Student b("Messi", 10, 3.99);
    Student c("Ronaldo", 7, 3.85);

    a.print();
    cout << "\n";

    b.print();
    cout << "\n";

    c.print();
    cout << "\n";
}

// “Destroyed” means the object’s life has ended and its memory is released, so it no longer exists.