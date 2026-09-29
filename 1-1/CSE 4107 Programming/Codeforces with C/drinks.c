#include <stdio.h>
int main()
{
    int t, x;
    double sum = 0;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {

        scanf("%d", &x);

        sum = sum + x;
    }

    double result;
    result = (sum * 1.0) / (t);

    printf("%0.12lf", result);

    return 0;
}