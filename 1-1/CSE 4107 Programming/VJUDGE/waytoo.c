#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char string[100];

    while (n--)
    {
        scanf("%s", string);

        int len = strlen(string);
        int number;

        if (len > 10)
        {
            number = len - 2;

            printf("%c%d%c\n", string[0], number, string[len - 1]);
        }
        else
        {
            printf("%s\n", string);
        }
    }

    return 0;
}