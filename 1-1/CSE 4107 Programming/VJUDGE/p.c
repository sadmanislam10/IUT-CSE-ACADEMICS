#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    long long x, y, z;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld", &x, &y);

        z = x - y;

        // if (z % 2 == 0 || z % 3 == 0 || z % 5 == 0 || z % 7 == 0 || z % 11 == 0)
        // {
        //     printf("YES\n");
        // }
        // else
        // {
        //     printf("NO\n");
        // }

        if (z == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}