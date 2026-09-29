#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(long long *)b - *(long long *)a);
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

    long long count = 0;

    for (long long i = 0; i < n-1; i++)
    {
        if ((arr[i] - arr[i + 1]) != 1)
        {
            count++;
        }
    }

    printf("%lld", count);

    return 0;
}