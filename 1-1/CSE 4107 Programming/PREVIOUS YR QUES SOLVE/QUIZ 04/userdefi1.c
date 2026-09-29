#include <stdio.h>

int isPerfect(int n)
{
    if (n == 1)
    {
        return 0;
    }
    int count = 1;
    for (int i = 2; (i * i) <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
            {
                count = count + i;
            }
            else
            {
                count = count + i + (n / i);
            }
        }
    }
    if (count == n)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    int x = isPerfect(num);

    if (x)
    {
        printf("Perfect num");
    }
    else
    {
        printf("Not perfect");
    }

    return 0;
}