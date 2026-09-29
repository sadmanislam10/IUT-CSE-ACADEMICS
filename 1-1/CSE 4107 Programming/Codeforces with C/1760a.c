#include <stdio.h>
#include <limits.h>

int main()
{
    int t;

    scanf("%d", &t);

    int a, b, c, max, min, sum = 0;

    for (int i = 0; i < t; i++)
    {

        scanf("%d %d %d", &a, &b, &c);

        max = a;
        min = a;

        sum = a + b + c;

        if (b > max && b > c)
        {
            max = b;
        }
        else if (c > max && c > b)
        {
            max = c;
        }

        if (b < min && b < c)
        {
            min = b;
        }
        else if (c < min && c < b)
        {
            min = c;
        }

        printf("%d\n", sum - max - min);
    }

    return 0;
}