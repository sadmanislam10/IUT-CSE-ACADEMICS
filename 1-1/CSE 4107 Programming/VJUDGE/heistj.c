// // #include <stdio.h>
// // #include <limits.h>

// // int main()
// // {
// //     int n, max = INT_MIN, min = INT_MAX;

// //     scanf("%d", &n);

// //     int arr[n];
// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }

// //     for (int i = 0; i < n; i++)
// //     {
// //         if (arr[i] > max)
// //         {
// //             max = arr[i];
// //         }
// //         if (arr[i] < min)
// //         {
// //             min = arr[i];
// //         }
// //     }

// //     // for (int i = 0; i < n - 1; i++)
// //     // {
// //     //     for (int j = i + 1; j < n; j++)
// //     //     {
// //     //         if (arr[j] < arr[i])
// //     //         {
// //     //             int temp;
// //     //             temp = arr[i];
// //     //             arr[i] = arr[j];
// //     //             arr[j] = temp;
// //     //         }
// //     //     }
// //     // }

// //     int count = 0;

// //     int size = max - min + 1;
// //     int newarr[size];

// //     for (int i = 0; i < size; i++)
// //     {
// //         newarr[i] = min;
// //         min++;
// //     }

// //     for ( i = 0; i < count; i++)
// //     {
// //         /* code */
// //     }

// //     printf("%d", count);

// //     return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int compare(const void *a, const void *b)
// {
//     return (*(int *)b - *(int *)a);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }
//     // printf("\n");

//     qsort(arr, n, sizeof(int), compare);

//     // for (int i = 0; i < n; i++)
//     // {
//     //     printf("%d ", arr[i]);
//     // }

//     int count = 0;

//     for (int i = 0; i < n-1; i++)
//     {
//         if ((arr[i] - arr[i + 1]) != 1)
//         {
//             count++;
//         }
//     }

//     printf("%d", count);

//     return 0;
// }

#include <stdio.h>
#include <limits.h>
int main()
{
    long long n;
    scanf("%lld", &n);

    long long arr[n];

    long long max = LONG_MIN, min = LONG_MAX;

    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    long long result = max - min + 1 - n;
    printf("%lld", result);
    return 0;
}