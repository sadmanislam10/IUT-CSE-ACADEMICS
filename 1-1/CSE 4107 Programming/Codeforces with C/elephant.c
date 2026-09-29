#include <stdio.h>
#include <math.h>

int main()
{
    int house, step;

    scanf("%d", &house);

    step = ceil((float)house / 5);

    printf("%d\n", step);

    return 0;
}