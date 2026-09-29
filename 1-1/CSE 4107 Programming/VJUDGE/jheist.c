#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    // sorting -- ascending
    for (long long i = 0; i < n - 1; i++)
    {
        for (long long j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                long long temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    long long start = arr[0];
    long long newarray[n];

    long long end = arr[n];

    for (long long i = 0; i < n; i++)
    {
        newarray[i] = start;
        start++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", newarray[i]);
    // }

    // printf("\n");

    long long count = 0;

    for (long long i = 0; i < end; i++)
    {

        if (newarray[i] == arr[i])
        {
            count++;
        }
    }

    printf("%lld", n - count);

    return 0;
}