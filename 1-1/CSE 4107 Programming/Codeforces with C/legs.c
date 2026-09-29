#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int legs;

    while (n--)
    {
        int sum = 0, quotient, rem, quotient2;
        scanf("%d", &legs);

        if (legs % 4 == 0)
        {
            printf("%d\n", legs / 4);
        }

        else
        {
            quotient = legs / 4;

            rem = legs % 4;

            quotient2 = rem / 2;

            sum = quotient + quotient2;

            printf("%d\n", sum);
        }
    }

    return 0;
}