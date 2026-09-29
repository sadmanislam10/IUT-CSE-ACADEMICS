#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int first, second, both;

        cin >> first >> second >> both;

        int x = both % 2;
        int y = both / 2;

        int f_total, s_total;
        // int f_total = 0, s_total = 0;
        // if (x == 1)
        // {
        //     f_total = first + y + 1;
        //     s_total = second + y;
        // }
        // else
        // {
        //     f_total = first + y;
        //     s_total = second + y;
        // }

        f_total = first + x + y;
        s_total = second + y;

        if (f_total > s_total)
        {
            cout << "First\n";
        }
        else
        {
            cout << "Second\n";
        }
    }

    return 0;
}