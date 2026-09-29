#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count = 1;
    // int max = INT_MIN;
    int max = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count > max)
        {
            max = count;
        }
    }

    printf("%d", max);
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0 + i; j < n - 1; j++)
    //     {
    //         if (arr[j + 1] >= arr[j])
    //         {
    //             count++;
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    //     if (count > max)
    //     {
    //         max = count;
    //     }
    //     count = 0;

    return 0;
}