#include <stdio.h>
int main()
{
    int n, found = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);

        int isprime = 1;

        if (num == 2)
        {
            isprime = 1;
        }
        else if (num % 2 == 0 || num < 2)
        {
            isprime = 0;
        }
        else
        {
            for (int j = 3; j * j <= num; j += 2)
            {
                if (num % j == 0)
                {
                    isprime = 0;
                    break;
                }
            }
        }
        if (isprime)
        {
            printf("%d ", num);
            found = 1;
        }
    }

    if (!found)
    {
        printf("NONE");
    }
    

    return 0;
}