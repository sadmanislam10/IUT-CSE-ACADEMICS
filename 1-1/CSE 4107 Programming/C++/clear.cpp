#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    name.clear(); // clears name or input 

    cout << "Your name is " << name << endl;

    return 0;
}