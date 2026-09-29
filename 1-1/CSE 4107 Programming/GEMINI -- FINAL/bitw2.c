#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d", &num);

    int shift;
    scanf("%d", &shift);

    int res = num << shift;

    int res2 = num * (pow(2, shift));

    printf("%d\n%d", res, res2);

    return 0;
}