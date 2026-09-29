#include <stdio.h>
int main()
{
    int n, a, b, c;

    scanf("%d", &n);

    while (n--)
    {
        scanf("%d %d %d", &a, &b, &c);

        if ((a + b == c) || (b + c == a) || (a + c == b))
        {
            printf("YES\n");
        }
        else if ((a == b && c % 2 == 0) || (b == c && a % 2 == 0) || (a == c && b % 2 == 0))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}