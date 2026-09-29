#include <stdio.h>

int *func(int arr[], int size)
{
    int count = 0;

    static int newarr[101]; // static ensures the array survives after the func returns

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] % arr[0] == 0 && arr[i] % arr[size - 1] == 0)
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
    int size;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *result = func(arr, size);

    int total_found = result[0]; /// confu

    for (int i = 0; i <= total_found; i++) ///
    {
        printf("%d ", result[i]);
    }

    return 0;
}