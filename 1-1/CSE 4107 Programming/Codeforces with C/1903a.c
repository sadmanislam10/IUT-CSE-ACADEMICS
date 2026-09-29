#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1 + i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                sum++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n%d", sum);
    return 0;
}