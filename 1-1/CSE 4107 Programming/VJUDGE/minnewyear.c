#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int hour, min, minleft;

    while (n--)
    {

        scanf("%d %d", &hour, &min);

        minleft = ((24 - hour) * 60) - min;

        printf("%d\n", minleft);
    }

    return 0;
}