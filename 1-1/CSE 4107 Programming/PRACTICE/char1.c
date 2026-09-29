#include <stdio.h>
int main()
{
    char word[100];
    int count = 0;

    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        switch (word[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

            count++;

            break;
        }
    }

    printf("Total Vowels: %d", count);

    return 0;
}