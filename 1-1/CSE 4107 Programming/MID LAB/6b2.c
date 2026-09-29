#include <stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        printf("Divisors of %d: ", num);
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}