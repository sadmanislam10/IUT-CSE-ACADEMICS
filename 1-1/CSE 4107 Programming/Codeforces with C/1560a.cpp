#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[1001];

    int num = 1, i = 1;

    // for (int i = 1; i <= 1000; i++)
    // {
    //     if (!((num % 3 == 0) || (num % 10 == 3)))
    //     {
    //         arr[i] = num;
    //         num++;
    //     }
    // }

    while (i <= 1000)
    {
        if (!((num % 3 == 0) || (num % 10 == 3)))
        {
            arr[i] = num;
            i++;
        }
        num++;
    }

    int t, index;

    cin >> t;

    while (t--)
    {

        cin >> index;

        cout << arr[index] << "\n";
    }

    return 0;
}