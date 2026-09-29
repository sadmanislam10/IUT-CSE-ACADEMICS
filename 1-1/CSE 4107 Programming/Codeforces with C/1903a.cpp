#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size, maxswap;

        cin >> size >> maxswap;

        int arr[size];

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        if (size - maxswap > 1)
        {
            printf("YES\n");
        }
        else if ((size - maxswap == 1) && maxswap == 1)

        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}