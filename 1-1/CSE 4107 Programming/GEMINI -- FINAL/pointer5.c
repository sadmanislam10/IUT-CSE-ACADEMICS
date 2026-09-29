#include <stdio.h>

void swap(int **pp1, int **pp2)
{
    int **temp;

    **pp1 = **temp;
    **temp = **pp2;
    **pp2 = **pp1;
}

int main()
{
    int a = 10, b = 20;

    int *p1 = &a;
    int *p2 = &b;

    swap(&p1, &p2);

    printf("%d %d", *p1, *p2);

    return 0;
}