#include <stdio.h>
#include <math.h>

int main()
{
    int num, prime = 1;
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("Not a Prime Number");
    }
    else if (num == 2)
    {
        printf("Prime number");
    }
    else if (num % 2 == 0)
    {
        printf("Not a prime number");
    }

    else
    {
        for (int i = 3; i <= sqrt(num); i += 2)
        {
            if (num % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("Prime number");
        }
        else
        {
            printf("Not prime ");
        }
    }

    return 0;
}