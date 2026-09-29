#include <stdio.h>
#include <string.h>

int main()
{
    int n, count = 1;
    scanf("%d", &n);

    char x[n][3];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", x[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (strcmp(x[i], x[i - 1]) != 0)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}