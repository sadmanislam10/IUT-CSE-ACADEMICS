#include <stdio.h>
int main()
{
    long long t;

    scanf("%lld", &t);

    while (t--)
    {
        /* code */
        long long x, y, n, temp, ans;

        scanf("%lld %lld %lld", &x, &y, &n);

        // for (long long k = 0; k <= n; k++)
        // {
        //     if (k % x == y)
        //     {
        //         ans = k;
        //     }
        // }

        // long long l = 0, r = n, ans = 0;
        // while (l<= r)
        // {
        //     long long mid = (r+l) /2;

        //     if (x % mid == y )
        //     {
        //         ans = mid;
        //     }
        //     else if()
        //     {

        //     }
        // }

        temp = (n % x) - y;

        ans = n - temp;

        printf("%lld\n", ans);
    }

    return 0;
}