#include <stdio.h>
#include <math.h>

int main()
{
    int n, result, a, b, flag=0;
    scanf("%d", &n);

    int numsq = n * n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a = i * i;
            b = j * j;


            int x = a + b;

            int sqroot = sqrt(x);

            int answer = sqroot * sqroot;

            if (answer == x)
            {
                flag = 1;
                printf("%d %d\n", i, j);
            }
        }
    }

    if (flag == 0)
    {
        printf("NONE");
    }

    return 0;
}