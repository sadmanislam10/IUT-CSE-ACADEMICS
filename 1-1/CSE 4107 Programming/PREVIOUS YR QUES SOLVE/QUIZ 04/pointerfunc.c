/*
int *a  === a pointer ===  indicates memory address

a == indicates memory address

*a  === value at address a
*/

#include <stdio.h>

int *larger(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int *x = larger(&num1, &num2);

    printf("%d", *x);

    return 0;
}