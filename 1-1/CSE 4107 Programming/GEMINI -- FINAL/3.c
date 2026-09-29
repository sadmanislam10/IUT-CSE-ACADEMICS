#include <stdio.h>

void emptyseats(int grid[3][3])
{
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("empty seats:%d\n", count);
}

int main()
{
    int grid[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &grid[i][j]);
        }
    }
    emptyseats(grid);

    return 0;
}