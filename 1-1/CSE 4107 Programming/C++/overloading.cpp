// function =  creating different functions using the same name

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Using fuction with two arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with threee arguments" << endl;
    return a + b + c;
}

int main()
{
    cout << "The sum of 5,6,7 is " << sum(5, 6, 7) << endl;

    cout << "The sum of 10, 12 is " << sum(10, 12) << endl;

    return 0;
}