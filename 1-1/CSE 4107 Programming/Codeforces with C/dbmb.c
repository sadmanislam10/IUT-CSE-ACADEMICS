#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int element, result, add, flag = 0;
        scanf("%d %d %d", &element, &result, &add);

        int arr[element];
        for (int i = 0; i < element; i++)
        {
            scanf("%d", &arr[i]);
        }

        int sum = 0;
        for (int i = 0; i < element; i++)
        {
            sum += arr[i];
        }

        if (sum == result)
        {
            printf("YES\n");
        }
        else
        {
            while (sum <= result)
            {
                sum += add;
                if (sum == result)
                {
                    flag = 1;
                }
            }

            if (flag)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}