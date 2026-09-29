#include <iostream>
using namespace std;

int main()
{
    double pi = 3.1416;
    double r;

    cout << "Enter the Radius:" << endl;
    cin >> r;

    double circumference;

    circumference = 2 * pi * r;

    cout << "The circumference of the circle is " << circumference << endl;

    return 0;
}