#include <stdio.h>
int main()
{
    long long num1, num2;
    scanf("%lld %lld", &num1, &num2);

    long long factorial_num1 = 1, factorial_num2 = 1;
    for (long long i = num1; i >= 1; i--)
    {
        factorial_num1 *= i;
    }

    for (long long i = num2; i >= 1; i--)
    {
        factorial_num2 *= i;
    }

    long long gcd = 1;
    long long min = (factorial_num1 < factorial_num2) ? factorial_num1 : factorial_num2;

    for (long long i = 1; i <= min; i++)
    {
        if (factorial_num1 % min == 0 && factorial_num2 % min == 0)
        {
            gcd = i;
        }
    }

    printf("%d", gcd);

    return 0;
}

#include <stdio.h>
int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long min = (a < b) ? a : b;

    long long factorial = 1;

    for (long long i = 1; i <= min; i++)
    {
        factorial *= i;
    }

    printf("%lld", factorial);

    return 0;
}
