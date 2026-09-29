#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int countofodd = 0;

    for (int i = 1; i <= n; i++)
    {

        int temp = i;
        int digitcount = 0;
        int rem;

        while (temp > 0)
        {

            rem = temp % 10;
            temp = temp / 10;
            digitcount++;
        }

        if (digitcount % 2 != 0)
        {
            countofodd++;
        }
    }

    printf("%d", countofodd);
    return 0;
}