#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int num = 1;

    if (size >= 1 &&  size <= 20)
    {

        for (int row = 1; row <= size; row++)
        {
            for (int col = 1; col <= size; col++)
            {
                if (row == 1 || row == size || col == 1 || col == size)
                {
                    printf("%-3d", num++);
                }
                else
                {
                    printf("   ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input");
    }

    return 0;
}
