#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, range;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> range;

        for (int i = 1; i <= range; i++)
        {
            if (i > 0 && i < 10)
            {
                sum++;
            }
            else if (i >= 10 && i <= 99)
            {
                if (i % 10 == 0)
                {
                    sum++;
                }
            }
            else if (i >= 100 && i <= 999)
            {
                if (i % 100 == 0)
                {
                    sum++;
                }
            }
            else if (i >= 1000 && i <= 9999)
            {
                if (i % 1000 == 0)
                {
                    sum++;
                }
            }
            else if (i >= 10000 && i <= 99999)
            {
                if (i % 10000 == 0)
                {
                    sum++;
                }
            }
            else if (i >= 100000 && i <= 999999)
            {
                if (i % 100000 == 0)
                {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}