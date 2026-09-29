#include <stdio.h>
#include <string.h>
#include <ctype.h>

void func(char firstname[], char lastname[])
{
    int i=0, j = 0;
    for ( i = 0; firstname[i] != '\0'; i++)
    {
        if (!(firstname[i] == 'A' || firstname[i] == 'E' || firstname[i] == 'I' || firstname[i] == 'O' || firstname[i] == 'U' ||
              firstname[i] == 'a' || firstname[i] == 'e' || firstname[i] == 'i' || firstname[i] == 'o' || firstname[i] == 'u'))
        {
            firstname[j] = firstname[i];
            j++;
        }
    }

    firstname[j] = '\0';

    for ( i = 0; lastname[i] != '\0'; i++)
    {
        lastname[i] = toupper(lastname[i]);
    }
    lastname[i] = '\0';
}

int main()
{
    char firstname[30], lastname[30];

    scanf("%s %s", firstname, lastname);

    func(firstname, lastname);

    printf("%s %s", firstname, lastname); //  // i can do strcat right?? -- printf("%s", strcat(firstname,lastname))

    return 0;
}