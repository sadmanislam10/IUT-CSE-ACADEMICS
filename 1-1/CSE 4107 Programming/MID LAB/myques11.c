// my method

#include <stdio.h>
int main()
{
    int n, flag = 0;

    scanf("%d", &n);

    int numsq = n * n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int result = (i * i) + (j * j);

            if (result == numsq)
            {
                flag = 1;
                printf("%d %d\n", i, j);
            }
        }
    }

    if (!flag)
    {
        printf("None");
    }

    return 0;
}