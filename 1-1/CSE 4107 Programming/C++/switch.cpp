#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18." << endl;
        break;

    case 10:

        cout << "You are 10" << endl;
        break;

    default:

        cout << "no match found" << endl;

        break;
    }

    return 0;
}