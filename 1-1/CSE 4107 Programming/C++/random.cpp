#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:

        cout << "You win a Audi car. " << endl;

        break;

    case 2:

        cout << "You win a MacBook. " << endl;

        break;

    case 3:

        cout << "You win a Iphone. " << endl;

        break;

    case 4:

        cout << "You win a Free Pizza. " << endl;

        break;

    case 5:

        cout << "You win a Cold Drinks. " << endl;

        break;
    }

    return 0;
}