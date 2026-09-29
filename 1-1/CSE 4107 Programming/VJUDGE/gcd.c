#include <stdio.h>
int main()
{

    int a, b, gcd = 1, min;
    scanf("%d %d", &a, &b);

    /*
    How ternary operator works (formula)
    condition ? value_if_true : value_if_false;
    */

    min = (a<b) ? a:b ;
    for (int i = 2; i <= min; i++)
    // gcd cant be more than the min of two nums
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD of %d & %d is %d", a, b, gcd);

    return 0;
}