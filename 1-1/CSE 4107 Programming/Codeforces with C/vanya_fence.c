#include <stdio.h>
int main()
{
    int n, h, width = 0;
    scanf("%d %d", &n, &h);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
        {
            width += 2;
        }
        else if (a[i] <= h)
        {
            width += 1;
        }
    }
    printf("%d", width);

    return 0;
}