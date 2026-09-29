#include <stdio.h>
int main()
{
    int arr[100], i = 0, n;

    while (i < 100)
    {
        scanf("%d", &arr[i]);

        if (arr[i] < 0)
        {

            break;
        }
    }

    while (i-- && i > 0)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}