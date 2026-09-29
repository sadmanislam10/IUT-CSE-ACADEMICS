// #include <stdio.h>
// #include <limits.h>

// // TODO: Write the findMinMax function here
// // It should take: the array, the size of the array, a pointer for the min, and a pointer for the max

// int func(int num[], int size, int *max, int *min)
// {
//     *max = num[0];
//     *min = num[0];

//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] > *max)
//         {
//             *max = num[i];
//         }
//         if (num[i] < *min)
//         {
//             *min = num[i];
//         }
//     }
// }

// int main()
// {
//     int numbers[] = {45, 12, 78, 4, 89, 32};
//     int size = 6;

//     int minimum;
//     int maximum;

//     // TODO: Call your findMinMax function here
//     func(numbers, size, &maximum, &minimum);

//     printf("Min: %d, Max: %d\n", minimum, maximum);
//     // Expected Output: Min: 4, Max: 89

//     return 0;
// }

#include <stdio.h>

void func(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }

        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}
int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    int min, max;

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    func(arr, size, &max, &min);

    printf("Max-%d\nMin-%d\n", max, min);

    return 0;
}