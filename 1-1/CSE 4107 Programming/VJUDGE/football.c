// BB

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);

    if (strstr(str, "1111111") || strstr(str, "0000000"))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}