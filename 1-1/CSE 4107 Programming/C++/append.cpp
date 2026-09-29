#include <iostream>
using namespace std;

int main()
{
    string name;

    cout << "Enter your name: " << endl;

    getline(cin, name);

    name.append("@gmail.com");

    cout << "your usernam is " << name << endl;

    return 0;
}