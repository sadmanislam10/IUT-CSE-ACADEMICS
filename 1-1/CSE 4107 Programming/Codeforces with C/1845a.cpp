#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    int target, range, forbidden;

    while (t--)
    {
        cin >> target >> range >> forbidden;

        if (range == 1 && forbidden == 1)
        {
            cout << "NO\n";
        }

        else if (range == 2 && forbidden == 1 && target % 2 != 0)
        {
            cout << "NO\n";
        }

        else if (range > 1 && forbidden != 1)
        {
            cout << "YES\n";
            cout << target << "\n";

            while (target--)
            {
                cout << "1 ";
            }
            cout << "\n";
        }

        else if (range == 2 && forbidden == 1 && target % 2 == 0)
        {
            int x = target / 2;
            cout << "YES\n";
            cout << x << "\n";

            while (x--)
            {
                cout << "2 ";
            }
            cout << "\n";
        }

        else if (range == 3 && forbidden == 1 && target % 3 == 0)
        {
            cout << "YES\n";

            int y = target / 3;
            cout << y << "\n";

            while (y--)
            {
                cout << "3 ";
            }
            cout << "\n";
        }

        else if (range == 5 && forbidden == 1 && target % 5 == 0)
        {
            cout << "YES\n";

            int y = target / 5;
            cout << y << "\n";

            while (y--)
            {
                cout << "5 ";
            }
            cout << "\n";
        }
    }
}