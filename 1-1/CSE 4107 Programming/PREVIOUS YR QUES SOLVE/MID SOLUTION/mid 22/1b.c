#include <stdio.h>
int main()
{
    char decision;
    int d1, d2, d3;

    scanf("%c", &decision);
    scanf("%d %d %d", &d1, &d2, &d3);

    if (decision == 'N')
    {
        if (d1 == 1 || d2 == 1 || d3 == 1)
        {
            printf("Out");
        }
        else
        {
            printf("Not out");
        }
    }

    if (decision == 'O')
    {
        if ((d1 == 0 && d2 == 0) || (d3 == 0 && d2 == 0) || (d1 == 0 && d3 == 0))
        {
            printf("Not out");
        }
        else
        {
            printf("Out");
        }
    }

    return 0;
}