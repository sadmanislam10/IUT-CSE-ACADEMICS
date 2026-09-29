#include <stdio.h>

int win(char b[6][8])
{
    int i, j, x_win = 0, o_win = 0;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (b[i][j] == '.') // if its dot..ignore it
            {
                continue;
            }

            char ch = b[i][j];

            // row fixed-- horizontal

            if (j <= 3 && b[i][j + 1] == ch && b[i][j + 2] == ch && b[i][j + 3] == ch)
            {
                if (ch == 'X')
                {
                    x_win = 1;
                }
                if (ch == 'O')
                {
                    o_win = 1;
                }
            }

            // column fixed-- vertical

            if (i <= 2 && b[i + 1][j] == ch && b[i + 2][j] == ch && b[i + 3][j] == ch)
            {
                if (ch == 'X')
                {
                    x_win = 1;
                }
                if (ch == 'O')
                {
                    o_win = 1;
                }
            }

            // diagonal -- left top to right bottom

            if (i <= 2 && j <= 3 && b[i + 1][j + 1] && b[i + 2][j + 2] && b[i + 3][j + 3])
            {
                if (ch == 'X')
                {
                    x_win = 1;
                }
                if (ch == 'O')
                {
                    o_win = 1;
                }
            }

            // diagonal -- right top to left bottom
            if (i <= 2 && j >= 3 && b[i + 1][j - 1] && b[i + 2][j - 2] && b[i + 3][j - 3])
            {
                if (ch == 'X')
                {
                    x_win = 1;
                }
                if (ch == 'O')
                {
                    o_win = 1;
                }
            }
        }
    }

    if (x_win)
    {
        return 1;
    }
    if (o_win)
    {
        return 2;
    }

    return 0;
}
int main()
{
    char b[6][8];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf(" %c", &b[i][j]);
        }
    }

    int result = win(b);

    printf("%d", result);

    return 0;
}