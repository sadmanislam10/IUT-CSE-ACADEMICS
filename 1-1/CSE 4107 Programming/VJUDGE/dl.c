#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int num;
        scanf("%d", &num);

        int sum = 0;

        while (num > 0)
        {
            sum += num % 2;
            num /= 2;
        }
        if (sum % 2 == 0)
        {
            printf("Case %d: even\n", i);
        }
        else
        {
            printf("Case %d: odd\n", i);
        }
    }

    return 0;
}