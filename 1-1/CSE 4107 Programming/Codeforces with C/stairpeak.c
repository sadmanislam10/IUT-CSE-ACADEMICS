#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c;

    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if (b > a && b > c)
        {
            printf("PEAK\n");
        }
        else if (b > a && c > b)
        {
            printf("STAIR\n");
        }
        else
        {
            printf("NONE\n");
        }
    }

    return 0;
}