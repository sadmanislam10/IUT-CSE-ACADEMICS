#include <iostream>
#include <string>

using namespace std;

class Student
{
private: // hidden from outside
    string name;
    int id;
    float cgpa;

public: // usable from outside
    void setData(string n, int i, float c)
    {
        name = n;
        id = i;
        if (c >= 0 && c <= 4.0)
        {
            cgpa = c;
        }
        else
        {
            cgpa = 0; // invalid values
        }
    }

    void print()
    {
        cout << name << " " << id << " " << cgpa << endl;
    }
};

int main()
{
    Student s1;
    s1.setData("Messi", 10, 4.00);
    s1.print();

    return 0;
}