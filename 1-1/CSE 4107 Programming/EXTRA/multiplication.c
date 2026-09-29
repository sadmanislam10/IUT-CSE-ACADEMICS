#include <stdio.h>
int main()
{
    int row1, col1, row2, col2, sum = 0;

    printf("Enter the first martix's row and coloumn: \n");
    scanf("%d %d", &row1, &col1);

    int matrix1[row1][col1];

    printf("Enter the second martix's row and coloumn: \n");
    scanf("%d %d", &row2, &col2);

    int matrix2[row2][col2];

    int resultmatrix[row1][col2];

    if (col1 != row2)
    {
        printf("Invalid Input");
    }

    else
    {
        // for first matrix
        printf("Enter the elements of first matrix:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements of second matrix:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &matrix2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    sum = sum + matrix1[i][k] * matrix2[k][j];
                }
                resultmatrix[i][j] = sum;
                sum = 0;
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", resultmatrix[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}