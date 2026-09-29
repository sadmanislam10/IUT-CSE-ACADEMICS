#include <stdio.h>

void sum()
{
    int x, y, sum;
    printf("Enter two numbers to sum: \n");
    scanf("%d %d", &x, &y);

    sum = x + y;

    printf("The sum of %d & %d is : %d\n", x, y, sum);
}

int main()
{
    sum();

    return 0;
}