#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int total, unit;

    while (n--)
    {
        scanf("%d %d", &total, &unit);

        if (total % 2 == 0 || total % unit == 0)
        {
            printf("YES\n");
        }

        else if (((total - 2) % unit == 0) || (total - unit) % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}