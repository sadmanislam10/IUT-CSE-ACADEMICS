// useful string methods

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);

    if (name.length() > 12)
    {
        cout << "Your name cant be over 12 characters" << endl;
    }
    else
    {

        cout << "your name is " << name << endl;
    }

    return 0;
}
