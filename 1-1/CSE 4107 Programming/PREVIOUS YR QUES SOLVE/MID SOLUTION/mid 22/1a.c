#include <stdio.h>
int main()
{
    int n, boundaries = 0, overboundaries = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n < 0)
        {
            break;
        }
        if (n == 4)
        {
            boundaries++;
        }
        if (n == 6)
        {
            overboundaries++;
        }
    }
    printf("Boundaries: %d\n", boundaries);
    printf("Over-boundaries: %d", overboundaries);

    return 0;
}