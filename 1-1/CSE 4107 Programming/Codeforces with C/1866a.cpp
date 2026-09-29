#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        arr[i] = abs(arr[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = abs(arr[i]);
    // }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            printf("0\n");
            return 0;
        }

        else
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }

    printf("%d\n", min);

    return 0;
}