#include <iostream>

using namespace std;

int main()
{
    string input, guess;

    cin >> input >> guess;

    int total = input.size();

    int bull = 0;

    for (int i = 0; i < total; i++)
    {
        if (input[i] == guess[i])
        {
            bull++;
        }
    }

    cout << bull << "B" << total - bull << "C";

    return 0;
}