#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int count = 0;
    int count_down = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            count++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            count_down++;
        }
    }

    printf("%d", count_down + count);

    return 0;
}