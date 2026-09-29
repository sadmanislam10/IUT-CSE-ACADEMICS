#include <stdio.h>
int main()
{
    int row, col, value;
    scanf("%d %d", &row, &col);

    int corr_row[row * col];
    int corr_col[row * col];
    int count = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &value);

            if (value < 0 || value > 255)
            {
                corr_row[count] = i;
                corr_col[count] = j;
                count++;
            }
        }
    }
    printf("Corrupted Pixel Locations:\n");
    for (int k = 0; k < count; k++)
    {
        printf("(%d, %d)\n", corr_row[k], corr_col[k]);
    }
    printf("Total corrupted pixels: %d", count);

    return 0;
}