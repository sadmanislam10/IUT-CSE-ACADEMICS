#include <stdio.h>
int main()
{
    int num1, num2, nextprime;
    scanf("%d %d", &num1, &num2);

    for (int x = num1 + 1; x <= 50; x++)
    {
        int isprime = 1;

        for (int i = 2; i * i <= x; i++)
        {
            if (x % i == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            nextprime = x;
            break;
        }
        
    }
    if (nextprime == num2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}