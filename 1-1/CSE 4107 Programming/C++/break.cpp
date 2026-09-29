#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 11; i++)
    {
        cout << i << endl;

        if (i == 5)
        {
            break;
        }
    }
    return 0;
} 