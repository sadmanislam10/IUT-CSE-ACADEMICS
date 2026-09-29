#include <stdio.h>
#include <string.h>

int main()
{
    char x[101];
    scanf("%s", &x);

    if ((strstr(x, "1111111"))|| (strstr(x, "0000000")))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}