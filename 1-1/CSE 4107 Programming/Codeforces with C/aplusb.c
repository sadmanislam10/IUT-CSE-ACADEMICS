#include <stdio.h>
int main()
{
    int step;
    scanf("%d", &step);

    for (int i = 0; i < step; i++)
    {
        int num,a,b,sum;
        scanf("%d", &num);

        a = num / 10;
        b = num % 10;

        sum = a + b;

        printf("%d\n", sum);
    }

    return 0;
}