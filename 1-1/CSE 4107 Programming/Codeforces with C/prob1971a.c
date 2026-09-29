#include <stdio.h>
int main()
{
    int t, a, b;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        if (a > b || a == b)
        {
            printf("%d %d", b, a);
        }

        else
        {
            printf("%d %d", a, b);
        }
    }

    return 0;
}