#include <stdio.h>
int main()
{
    int g, c, l;

    scanf("%d %d %d", &g, &c, &l);

    int max = g, min = g;

    int sum = g + c + l;

    if (c > max)
        max = c;
    if (l > max)
        max = l;

    if (c < min)
        min = c;
    if (l < min)
        min = l;

    if (max - min >= 10)
    {
        printf("check again");
    }

    else
    {
        printf("final %d", sum - max - min);
    }

    return 0;
}