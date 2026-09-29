// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int count = 0;
//     int static newarr[101];
//     int j = 1;

//     for (int i = 1; i < n - 1; i++)
//     {
//         if ((arr[i] % arr[0] == 0) && arr[i] % arr[n - 1] == 0)
//         {
//             count++;
//             newarr[j] = i;
//             j++;
//         }
//     }

//     printf("%d\n", count);

//     newarr[0] = count;

//     for (int i = 0; i < count + 1; i++)
//     {
//         printf("%d ", newarr[i]);
//     }

//     return 0;
// }

#include <stdio.h>

int *func(int n, int arr[])
{

    static int newarr[101];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % arr[0] == 0 && arr[i] % arr[n - 1] == 0)
        {
            count++;
            newarr[count] = i;
        }
    }

    newarr[0] = count;
    return newarr;
}

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *result = func(n, arr);

    int found = result[0];

    for (int i = 0; i <= found; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}