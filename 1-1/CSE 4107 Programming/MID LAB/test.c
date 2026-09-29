#include <stdio.h>
int main()
{
    int n;

    scanf("%d", &n);

    int arr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[n - i - 1];
        printf("%d ", brr[i]);
    }

    return 0;
}