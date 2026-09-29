#include <stdio.h>
int main()
{
    int n, kth, count = 0;

    scanf("%d %d", &n, &kth);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] >= arr[kth - 1])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}