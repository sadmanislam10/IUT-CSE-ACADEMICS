#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> energy;

    int x;

    while (cin >> x && x != 0)
    {
        energy.push_back(x);
    }

    int target;

    cin >> target;

    int pair = 0;
    int size = energy.size();

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((energy[i] + energy[j]) == target)
            {
                pair++;
            }
        }
    }

    if (pair == 0)
    {
        cout << "No pair found! \n";
    }
    else
    {
        cout << pair << "\n";
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((energy[i] + energy[j]) == target)
            {
                cout << "(worker: " << i + 1 << ", worker: " << j + 1 << ")" << "\n";
            }
        }
    }

    return 0;
}