#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int num, i = 1;

    while (n--)
    {

        scanf("%d", &num);
        int temp = num, newnum, sum = 0, rem;

        while (temp > 0)
        {

            rem = temp % 10;
            sum = (sum * 10) + rem;
            temp = temp / 10;
        }

        if (num == sum)
        {
            printf("Case %d: Yes\n", i);
            i++;
        }
        else
        {
            printf("Case %d: No\n", i);
            i++;
        }
    }

    return 0;
}
