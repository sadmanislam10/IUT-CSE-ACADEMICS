#include <iostream>
using namespace std;

int main()
{
    int marks[4] = {100, 90, 90, 80};

    for (int i = 0; i < 4; i++)
    {
        cout << "The marks" << i << " is " << marks[i] << endl;
    }

    return 0;
}