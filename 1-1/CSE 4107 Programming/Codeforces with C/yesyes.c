#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char word[5];

    while (n--)
    {
        scanf("%s", &word);

        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = toupper(word[i]);
        }

        if (strcmp(word,"YES") == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}