#include <stdio.h>
#include <stdlib.h> // for abs

int main()
{
    int arr[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] == 1)
            {
                int x = abs(2-i);
                int y = abs(2-j);
                printf("%d", (x+y));
            }
        }
    }

    return 0;
}