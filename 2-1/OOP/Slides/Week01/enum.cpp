#include <iostream>

using namespace std;

enum Color
{
    RED,
    GREEN,
    BLUE
}; // fixed set of values like red green 

int main()
{
    Color c = GREEN;

    if (c == GREEN)
    {
        cout << "Go\n";
    }

    cout << c << "\n";

    return 0;
}