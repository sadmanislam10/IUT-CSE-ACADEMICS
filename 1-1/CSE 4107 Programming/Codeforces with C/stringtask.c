#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char word[100];
    char newword[200];
    int k = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        char c = tolower(word[i]);

        if (!strchr("aeiou", c))
        {
            newword[k++] = '.';
            newword[k++] = c;
        }
    }

    newword[k] = '\0';

    printf("%s", newword);

    return 0;
}