#include <stdio.h>
#include <limits.h>

int main()
{
    int totalroutes, maxtime;
    scanf("%d %d", &totalroutes, &maxtime);

    int result[totalroutes], flag = 0, min = INT_MAX;

    int cost[totalroutes], time[totalroutes];

    for (int i = 0; i < totalroutes; i++)
    {
        scanf("%d %d", &cost[i], &time[i]);
    }

    for (int i = 0; i < totalroutes; i++)
    {
        result[i] = 0;
    }

    for (int i = 0; i < totalroutes; i++)
    {
        if (time[i] <= maxtime)
        {
            flag = 1;
            result[i] = cost[i];
        }
    }

    for (int i = 0; i < totalroutes; i++)
    {
        if (result[i] < min && result[i] != 0)
        {
            min = result[i];
        }
    }

    if (!flag)
    {
        printf("TLE\n");
    }

    else
    {
        printf("%d\n", min);
    }

    return 0;
}