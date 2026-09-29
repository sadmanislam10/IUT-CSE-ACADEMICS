#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp;

            if (arr[i] < arr[j])
            {
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

    int sereja = 0, dima = 0;

    for (int i = 0; i < n; i += 2)
    {
        sereja += arr[i];
    }

    for (int i = 1; i < n; i += 2)
    {
        dima += arr[i];
    }

    printf("%d %d", sereja, dima);

    return 0;
}