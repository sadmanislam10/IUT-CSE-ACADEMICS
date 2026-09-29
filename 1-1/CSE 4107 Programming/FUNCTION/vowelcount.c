#include <stdio.h>
#include <ctype.h>

int func(char string[])
{
    int count = 0;
    
    for (int i = 0; string[i] != '\0'; i++)
    {
        char ch = tolower(string[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);

    int result = func(string);

    printf("%d", result);

    return 0;
}
