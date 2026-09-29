#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "WELCOME TO NUMBER GUESSING GAME \n " << endl;
    cout << "Guess a number from 1-100 \n"
         << endl;

    do
    {
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too HIGH!!" << endl;
        }
        else if (guess < num)
        {
            cout << "Too LOW!! " << endl;
        }
        else
        {
            cout << "Guessed RIGHT \n"
                 << endl;
            cout << "Numer of tries: " << tries << endl;
        }

    } while (num != guess);

    return 0;
}