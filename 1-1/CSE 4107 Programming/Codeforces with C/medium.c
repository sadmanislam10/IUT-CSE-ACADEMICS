#include <stdio.h>
int main()
{
    int attempt, a, b, c;
    scanf("%d", &attempt);
    
    for (int i = 0; i < attempt; i++)
    {
        scanf("%d %d %d", &a, &b, &c);

        if ((a > b && a < c) || (a<b && a>c))
        {
            printf("%d\n", a);
        }

        else if ((b > a && b < c) || (b<a && b>c))
        {
            printf("%d\n", b);
        }

        else
        {
            printf("%d\n", c);
        }
    }

    return 0;
}