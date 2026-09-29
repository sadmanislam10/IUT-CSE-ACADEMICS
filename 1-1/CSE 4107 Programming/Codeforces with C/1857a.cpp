#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum_even = 0, sum_odd = 0, size;

        cin >> size;

        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] % 2 == 0)
            {
                sum_even += arr[i];
            }
            else
            {
                sum_odd += arr[i];
            }
        }

        if (size == 2 && ((arr[0] % 2 == 0 && arr[1] % 2 == 0) || (arr[0] % 2 != 0 && arr[1] % 2 != 0)))
        {
            cout << "YES\n";
        }
        else if (sum_even % 2 == 0 && sum_odd % 2 == 0)
        {
            cout << "YES\n";
        }
        else if (sum_even % 2 != 0 && sum_odd % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}