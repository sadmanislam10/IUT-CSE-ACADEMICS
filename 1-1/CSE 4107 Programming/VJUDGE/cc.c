#include <stdio.h>
#include <string.h>

int main()
{
    int add;
    scanf("%d", &add);

    char string[10001];
    scanf("%s", &string);

    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {

        string[i] += add;

        if (string[i] > 'Z')
        {
            string[i] = string[i]-26;
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}