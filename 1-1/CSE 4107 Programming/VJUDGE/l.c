#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%c", &matrix[i][j]);
        }
    }

    int count = 0;

    return 0;
}