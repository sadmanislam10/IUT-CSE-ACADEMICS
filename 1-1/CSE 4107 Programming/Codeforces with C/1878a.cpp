#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int size, target, flag = 0;
        cin >> size >> target;

        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == target)
            {
                flag = 1;
            }
        }

        if (flag)
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