#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int x, y, z, a, b, c, sum1, sum2;

    x = num / 100000;
    y = (num % 100000) / 10000;
    z = (num % 10000) / 1000;
    a = (num % 1000) / 100;
    b = (num % 100) / 10;
    c = num % 10;

    sum1 = x + y + z;

    sum2 = a + b + c;

    if (sum1 == sum2)
    {
        printf("Lucky Number\n");
    }

    else
    {
        printf("Not a Lucky Number");
    }

    return 0;
}