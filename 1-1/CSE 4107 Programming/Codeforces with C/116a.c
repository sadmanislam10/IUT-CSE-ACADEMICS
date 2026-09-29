#include <stdio.h>
#include <limits.h>

int main()
{
    int n, max = INT_MIN;

    scanf("%d", &n);

    int a[n], b[n], sum[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }

    int x = 0;
    for (int i = 0; i < n; i++)
    {
        sum[i] = x - a[i] + b[i];
        x = sum[i];

        if (sum[i] > max)
        {
            max = sum[i];
        }
    }

    printf("%d", max);

    return 0;
}