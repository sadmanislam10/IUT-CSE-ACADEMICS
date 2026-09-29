#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d", &row);

    col = row;

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int col1_sum = 0, col2_sum = 0, col3_sum = 0;

    // for (int i = 0; i < row; i++)
    // {
    //     col1_sum += matrix[i][0];
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     col2_sum += matrix[i][1];
    // }

    // for (int i = 0; i < row; i++)
    // {
    //     col3_sum += matrix[i][2];
    // }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            
        }
        
        
    }
    

    if (col1_sum == col2_sum && col1_sum == col3_sum)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}