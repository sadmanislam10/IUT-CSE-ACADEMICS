#include <stdio.h>
int main()
{
    int row, coloumn;

    printf("Enter the martix's row and coloumn: \n");
    scanf("%d %d", &row, &coloumn);

    int matrix[row][coloumn];

    printf("Enter the value at index : \n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            printf("matrix[%d][%d]= ", i, j);

            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}