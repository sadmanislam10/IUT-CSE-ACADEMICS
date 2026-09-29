#include <stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (num == 2)
        {
            printf("%d   : Prime\n", num);
            continue;
        }

        if (num % 2 == 0 || num < 2)
        {
            printf("%d  : Not Prime\n", num);
            continue;
        }

        int isprime = 1;
        for (int j = 3; j * j <= num; j += 2)
        {
            if (num % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            printf("%d  : Prime\n", num);
        }
        else
        {
            printf("%d  : Not Prime\n", num);
        }
    }
    return 0;
}
