#include <stdio.h>
#include <stdlib.h>

int compare(void const *a, void const *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    return y - x;
}
int main()
{
    long long n;
    scanf("%lld", &n);

    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    qsort(arr, n, sizeof(long long), compare);

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    long long x_count = 0, y_count = 0;

    if (n % 2 == 0)
    {
        for (long long i = 0; i < (n / 2); i++)
        {
            x_count += arr[i];
        }

        for (long long i = n / 2; i < n; i++)
        {
            y_count += arr[i];
        }
    }
    else
    {
        for (long long i = 0; i < (n / 2) + 1; i++)
        {
            x_count += arr[i];
        }

        for (long long i = (n / 2) + 1; i < n; i++)
        {
            y_count += arr[i];
        }
    }

    long long x_sq = x_count * x_count;
    long long y_sq = y_count * y_count;
    long long res = x_sq + y_sq;

    printf("%lld", res);

    return 0;
}