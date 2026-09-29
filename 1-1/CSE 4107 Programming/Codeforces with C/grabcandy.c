#include <stdio.h>
int main()
{
    int n, x, even, odd;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &x);
        int num;

        for (int i = 0; i < x; i++)
        {

            scanf("%d", &num);

            if (num % 2 == 0)
            {
                even += num;
            }
            else
            {
                odd += num;
            }
        }
        if (even > odd)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        even = 0;
        odd = 0;
    }

    return 0;
}