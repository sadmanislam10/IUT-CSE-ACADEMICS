#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int c = 1, a, b;
    int result;

    while (n--)
    {
        scanf("%d %d", &a, &b);

        result = (c - a) + (b - c);

        printf("%d\n", result);
    }

    return 0;
}