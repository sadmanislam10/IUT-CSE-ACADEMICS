#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, row = 10, col = 10;

    cin >> t;

    char arr[row][col];

    while (t--)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> arr[i][j];
            }
        }

        // cout << "\n";

        // for (int i = 0; i < row; i++)
        // {

        //     for (int j = 0; j < col; j++)
        //     {
        //         cout << arr[i][j];
        //     }
        //     cout << "\n";
        // }

        // cout << "\n\n";

        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (arr[i][j] == 'X')
                {
                    if ((i == 0 || i == 9) && (j >= 0 && j <= 9) || (j == 0 || j == 9) && (i >= 1 && i <= 8))
                    {
                        sum += 1;
                    }

                    else if ((i == 1 || i == 8) && (j >= 1 && j <= 8)|| (j == 1 || j == 8) && (i >= 2 && i <= 7))
                    {

                        sum += 2;
                    }
                    else if ((i == 2 || i == 7) && (j >= 2 && j <= 7)|| (j == 2 || j == 7) && (i >= 3 && i <= 6))
                    {
                        sum += 3;
                    }
                    else if ((i == 3 || i == 6) && (j >= 3 && j <= 6)|| (j == 3 || j == 6) && (i >= 4 && i <= 5))
                    {
                        sum += 4;
                    }
                    else if((i == 4 || i == 5) && (j >= 4 && j <= 5))
                    {
                        sum += 5;
                    }
                }
            }
        }

        cout << sum << "\n";
    }

    return 0;
}