#include <bits/stdc++.h>
using namespace std;

int main()

{
    int n, num;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num == 2)
        {
            cout << num << "- Prime\n"
                 << endl;
            continue;
        }

        if (num % 2 == 0 || num < 2)
        {
            cout << num << "-Not Prime" << endl;
        }

        int isprime = 1;
        for (int j = 3; j * j <= num; j += 2)
        {
            if (num % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            cout << num << "-Prime" << endl;
        }
        else
            cout << num << "-Not prime" << endl;
    }

    return 0;
}