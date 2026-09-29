#include <stdio.h>
int main()

{
    int matrix[3][3] = {{1, 3, 9}, {5, 9, 7}};
    matrix[0][0] = 0;

    printf("%d", matrix[0][0]);

    return 0;
}