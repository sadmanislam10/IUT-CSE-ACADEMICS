#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int stations, destination;
        cin >> stations >> destination;

        int arr[stations];

        

        for (int i = 0; i < stations; i++)
        {
            cin >> arr[i];
        }

        int max_diff = arr[0];

        for (int i = 0; i < stations-1; i++)
        {
            if ((arr[i + 1] - arr[i]) > max_diff)
            {
                max_diff = arr[i + 1] - arr[i];
            }
        }

        int diff_last_and_dest = 2*(destination - arr[stations-1]);

        if (max_diff >= diff_last_and_dest)
        {
            cout << max_diff << endl;
        }
        else
        {
            cout << diff_last_and_dest << endl;
        }
    }

    return 0;
}