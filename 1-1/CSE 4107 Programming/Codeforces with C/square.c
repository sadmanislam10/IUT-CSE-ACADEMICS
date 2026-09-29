#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);

    while (x--)
    {

        int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == b && b == c && c == d)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}