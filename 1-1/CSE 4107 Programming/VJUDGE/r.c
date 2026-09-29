#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x, y, sum = INT_MIN, newsum;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x, &y);

        newsum = x + y;
        if (newsum > sum)
        {
            sum = newsum;
        }
    }

    printf("%d", sum);

    return 0;
}