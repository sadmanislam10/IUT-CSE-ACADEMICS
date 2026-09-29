#include <stdio.h>
int main()
{
    int x;

    scanf("%d", &x);

    int hard = 0;

    for (int i = 0; i < x; i++)
    {
        int y;
        scanf("%d", &y);

        if (y == 1)
        {
            hard = 1;
        }
    }

    if (hard == 1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }

    return 0;
}