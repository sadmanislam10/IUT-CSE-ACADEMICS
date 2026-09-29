#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int amount[105];
    float left, middle, right, result;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &amount[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            left = 0;
        }
        else
        {
            left = amount[i - 1];
        }

        if (i == (n - 1))
        {
            right = 0;
        }
        else
        {
            right = amount[i + 1];
        }

        middle = amount[i];
        result = (left + middle + right) / (3.0);
        printf("%.2f ", result);
    }

    return 0;
}