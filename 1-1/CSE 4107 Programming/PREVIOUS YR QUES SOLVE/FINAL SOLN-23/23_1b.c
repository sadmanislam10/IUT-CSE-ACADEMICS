#include <stdio.h>

int func(int n, int matrix[n][n])
{
    int referedsum = 0;

    // reference
    for (int j = 0; j < n; j++)
    {
        referedsum += matrix[0][j];
    }

    // for row-- row fixed
    for (int i = 0; i < n; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < n; j++)
        {
            rowsum += matrix[i][j];
        }

        if (rowsum != referedsum)
        {
            return 0;
        }
    }

    // for coloumn -- coloumn fixed
    for (int j = 0; j < n; j++)
    {
        int colsum = 0;

        for (int i = 0; i < n; i++)
        {
            colsum += matrix[i][j];
        }

        if (colsum != referedsum)
        {
            return 0;
        }
    }

    // for main diagonal
    int maindia_sum = 0;
    for (int i = 0; i < n; i++)
    {
        maindia_sum += matrix[i][i];
    }
    if (maindia_sum != referedsum)
    {
        return 0;
    }

    // for sec diagonal
    int secdia_sum = 0, r = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        secdia_sum += matrix[r][i];
        r++;
    }
    if (secdia_sum != referedsum)
    {
        return 0;
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int x = func(n, arr);

    if (x)
    {
        printf("Magic Square\n");
    }
    else
    {
        printf("Not Magic Sqr\n");
    }

    return 0;
}