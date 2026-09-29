#include <stdio.h>
int main()
{
    int seats;
    printf("Total number of seats:\n");
    scanf("%d", &seats);

    int type;
    printf("Type of bus(1: Economy,2: Premium):\n");
    scanf("%d", &type);

    // Premium
    if (type == 2)
    {
        if (seats % 3 != 0)
        {
            printf("Invalid input\n");
            return 1;
        }
        else
        {
            int row = seats / 3;
            char alphabet = 'A';

            for (int i = 0; i < row; i++)
            {
                for (int j = 1; j <= 3; j++)
                {
                    printf("%c%d ", alphabet, j);
                }
                alphabet++;
                printf("\n");
            }
        }
    }

    // Economy
    if (type == 1)
    {
        if (seats % 4 != 0)
        {
            printf("Invalid input\n");
            return 1;
        }
        else
        {
            int row = seats / 4;
            char alphabet = 'A';

            for (int i = 0; i < row; i++)
            {
                for (int j = 1; j <= 4; j++)
                {
                    printf("%c%d ", alphabet, j);
                }
                alphabet++;
                printf("\n");
            }
        }
    }

    return 0;
}