#include <stdio.h>
int main()
{
    int a, b, c, attempt;

    scanf("%d", &attempt);

    for (int i = 0; i < attempt; i++)
    {

        scanf("%d %d %d", &a, &b, &c);

        if (a + b == c)
        {
            printf("+\n");
        }

        else if (a - b == c)
        {
            printf("-\n");
        }
    }

    return 0;
}