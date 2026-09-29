#include <stdio.h>
#include <ctype.h>

int main()
{
    char word[100];
    scanf("%s", word);

    int upper_count = 0, lower_count = 0;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (isupper(word[i]))
        {
            upper_count++;
        }

        if (islower(word[i]))
        {
            lower_count++;
        }
    }

    if (upper_count > lower_count)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = toupper(word[i]);
        }
        printf("%s", word);
    }
    else if (lower_count >= upper_count)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = tolower(word[i]);
        }
        printf("%s", word);
    }

    return 0;
}