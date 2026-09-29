#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n], brr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int x = 0, res, flag;
        while (x < (pow(2, 8)))
        {

            res = 0;
            flag = 0;
            for (int i = 0; i < n; i++)
            {
                brr[i] = arr[i] ^ x;
            }

            for (int i = 0; i < n; i++)
            {
                res ^= brr[i];
            }

            if (res == 0)
            {
                flag = 1;
                break;
            }
            else
            {
                x++;
            }
        }

        if (flag)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}