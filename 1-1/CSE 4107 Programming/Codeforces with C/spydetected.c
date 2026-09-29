#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int size, index;

    while (n--)
    {
        scanf("%d", &size);
        int arr[size], majority;

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }

        if (arr[0] == arr[1])
        {
            majority = arr[0];
        }
        else if (arr[0] == arr[2])
        {
            majority = arr[0];
        }
        else
        {
            majority = arr[1];
        }

        for (int i = 0; i < size; i++)
        {
            if (arr[i] != majority)
            {
                index = i + 1;
                printf("%d\n", index);
                break;
            }
        }

        // else
        // {
        //     if (arr[0] == arr[1])
        //     {
        //         index = 3;
        //     }
        //     else if (arr[0] == arr[2])
        //     {
        //         index = 2;
        //     }
        //     else
        //     {
        //         index = 1;
        //     }

        //     printf("%d\n", index);
        // }
    }

    return 0;
}