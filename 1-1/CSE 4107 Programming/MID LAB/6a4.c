#include <stdio.h>
#include <math.h>
int main()
{
    int n, x = 0, rem, sum = 0;
    scanf("%d", &n);
    int num;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        while (num > 0)
        {
            rem = num % 10;
            sum = sum + (rem * pow(2, x));
            x++;
            num = num / 10;
        }

        printf("%d ",sum);
        sum = 0;
        x = 0;
    }

    return 0;
}