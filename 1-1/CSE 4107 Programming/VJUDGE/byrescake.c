#include <stdio.h>

int main()
{
    int numofgems;
    scanf("%d", &numofgems);

    int value[numofgems], cost[numofgems];

    for (int i = 0; i < numofgems; i++)
    {
        scanf("%d", &value[i]);
    }

    for (int i = 0; i < numofgems; i++)
    {
        scanf("%d", &cost[i]);
    }

    int x = 0, y = 0;

    for (int i = 0; i < numofgems; i++)
    {
        if (value[i] > cost[i])
        {
            x += value[i];
            y += cost[i];
        }
    }

    printf("%d", x - y);

    return 0;
}
