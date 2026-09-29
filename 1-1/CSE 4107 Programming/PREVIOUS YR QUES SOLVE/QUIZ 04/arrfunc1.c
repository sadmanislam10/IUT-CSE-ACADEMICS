#include <stdio.h>
#include <limits.h>

void findmax(int n, int arr[])
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("%d", max);
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

    findmax(size, arr);

    return 0;
}