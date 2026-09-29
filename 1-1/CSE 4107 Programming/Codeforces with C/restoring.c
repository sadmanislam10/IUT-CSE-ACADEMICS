#include <stdio.h>
int main()
{
    int x, y, z, m, greatest;

    scanf("%d %d %d %d", &x, &y, &z, &m);

    if (x > y && x > z && x > m)
    {
        greatest = x;
    }
    else if (y > x && y > z && y > m)
    {
        greatest = y;
    }
    else if (z > x && z > y && z > m)
    {
        greatest = z;
    }
    else
    {
        greatest = m;
    }


    if (greatest == x)
    {

        printf("%d %d %d", greatest - y, greatest - z, greatest - m);
    }
    else if(greatest == y)
    {

        printf("%d %d %d", greatest - x, greatest - z, greatest - m);
    }
    else if (greatest == z)
    {

        printf("%d %d %d", greatest - x, greatest - y, greatest - m);
    }
    else
    {

        printf("%d %d %d", greatest - x, greatest - y, greatest - z);
    }

    return 0;
}