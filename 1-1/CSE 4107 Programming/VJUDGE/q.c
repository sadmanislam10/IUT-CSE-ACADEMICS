#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int lastnum_rmv, secnum_rmv;

    if (n > 0)
    {
        printf("%d", n);
    }

    else
    {
        lastnum_rmv = n / 10;

        secnum_rmv = ((n / 100) * 10) + ((n % 100) % 10);

        if (lastnum_rmv > secnum_rmv)
        {
            printf("%d", lastnum_rmv);
        }
        else
        {
            printf("%d", secnum_rmv);
        }
    }

    return 0;
}