#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int even = 0, odd = 0;
        for (int i = 0; i < (n * 2); i++)
        {
            int a;
            scanf("%d", &a);

            if (a % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (even == odd)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}