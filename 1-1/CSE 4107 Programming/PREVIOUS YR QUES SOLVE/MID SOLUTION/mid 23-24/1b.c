#include <stdio.h>
#include <limits.h>

int main()
{
    int n, min = INT_MAX, max = INT_MIN;

    while (1)
    {
        scanf("%d", &n);

        if (!n) // !n = n==0)
        {
            break;
        }

        if (n > max)
        {
            max = n;
        }
        if (n < min)
        {
            min = n;
        }
    }

    printf("Differnece is: %d", max-min);

    return 0;
}