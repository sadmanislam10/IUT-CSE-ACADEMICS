#include <stdio.h>
int main()
{
    int t;

    scanf("%lld", &t);

    while (t--)
    {
        /* code */
         x, y, n, ans;

        scanf("%lld %lld %lld", &x, &y, &n);

        for (int k = 0; k <= n; k++)
        {
            if (k % x == y)
            {
                ans = k;
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}