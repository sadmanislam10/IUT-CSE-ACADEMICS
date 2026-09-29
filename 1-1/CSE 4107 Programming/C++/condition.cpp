#include <iostream>
using namespace std;

int main()
{
    cout << "Check if number is positive or negative. ENTER THE NUMBER" << endl;
    int x;
    cin >> x;

    if (x > 0)
    {
        cout << "Positive";
    }
    else if (x < 0)
    {
        cout << "Negative";
    }
    else
    {
        cout << "It is zero";
    }

    return 0;
}
