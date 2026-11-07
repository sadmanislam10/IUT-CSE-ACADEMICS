#include <iostream>
#include <string>

using namespace std;

class rectangle
{

private:
    double len;
    double width;

public:
    rectangle()
    {
        (len <= 0 ? 1 : len) || (width <= 0 ? 1 : width);
        cout << "Default constructor called\n";
    }

    rectangle(double l, double w)
    {
        len = l;
        width = w;
        cout << "Parameterized constructor called\n";
    }

    double area(double l, double w)
    {
        return l * w;
    }
};

int main()
{
    rectangle a(0, -1);

    rectangle b(5, 4);

    cout << a.area(0,-1) << "\n"
         << b.area(5,4) << "\n";
}