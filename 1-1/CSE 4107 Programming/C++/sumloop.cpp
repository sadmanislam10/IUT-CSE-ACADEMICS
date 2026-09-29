#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n to sum up" << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {  
        sum = sum + i;
    }

    cout << "The total is " << sum << endl;

    return 0;
}