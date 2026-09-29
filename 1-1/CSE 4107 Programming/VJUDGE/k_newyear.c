#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    int middle;

    if ((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2))
    {
        middle = x1;
    }
    else if ((x2 > x1 && x2 < x3) || (x2 > x3 && x2 < x1))
    {
        middle = x2;
    }
    else
    {
        middle = x3;
    }

    int result;

    if (middle == x1)
    {
        result = abs(middle - x2) + abs(middle - x3);
    }
    else if (middle == x2)
    {
        result = abs(middle - x1) + abs(middle - x3);
    }
    else
    {
        result = abs(middle - x1) + abs(middle - x2);
    }

    printf("%d", result);

    return 0;
}