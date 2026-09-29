#include <iostream>
#include <iomanip> // new library
using namespace std;

int main()
{
    int a = 4, b = 50, c = 1234;

    cout << "The value of a without setw is: " << a << endl;
    cout << "The value of b without setw is: " << b << endl;
    cout << "The value of c without setw is: " << c << endl;

    cout << "The value of a with setw is: " << setw(4) << a << endl;
    cout << "The value of b with setw is: " << setw(4) << b << endl;
    cout << "The value of c with setw is: " << setw(4) << c << endl;
      
    return 0;
}
