#include <stdio.h>
#include <string.h>
#include <ctype.h>
// y is also a vowel in this case xd..again wrong on test 15
int main()
{
    char string[2000];
    char newstring[4000] = {0};

    scanf("%s", string);

    int i, j = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
        string[i] = tolower(string[i]);

        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] =='y')
        {
            continue;
        }

        else
        {
            newstring[j] = '.';
            j++;
            newstring[j] = string[i];
            j++;
        }
    }
    newstring[j] = '\0';

    printf("%s", newstring);

    return 0;
}