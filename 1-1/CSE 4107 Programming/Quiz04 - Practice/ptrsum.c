#include <stdio.h>

int arraySum(int *ptr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = arraySum(arr, size);

    printf("%d", x);

    return 0;
}