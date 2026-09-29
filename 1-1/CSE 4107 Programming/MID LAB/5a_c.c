#include <stdio.h>
int main()
{
    float sum = 200, x = 100;
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum = (float)sum + (x);
        x = x / 2;
    }

    printf("Power:  %.2f", sum);

    return 0;
}