#include <stdio.h>

void sum()
{
    int x, y;
    printf("Enter two numbers: \n");
    scanf("%d %d", &x, &y);
    int sum;
    sum = x + y;
    printf("Sum is %d", sum);
}

int main()
{
    sum();

       return 0;
}