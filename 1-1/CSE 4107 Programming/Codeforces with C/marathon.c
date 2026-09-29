#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[4], count = 0;

    while (n--)
    {
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 1; i < 4; i++)
        {
            if (arr[0] < arr[i])
            {
                count++;
            }
        }

        printf("%d\n", count);
        count = 0;
    }

    return 0;
}