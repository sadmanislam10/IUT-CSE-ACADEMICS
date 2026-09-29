#include <stdio.h>
#include <string.h>

int main()
{
    char string[101];
    scanf("%s", &string);

    int len = strlen(string);
    int temp;

    for (int i = 0; i < len - 2; i += 2)
    {
        for (int j = 0; j < len-2-i; j += 2) // painnnnnnn
        {
            if (string[j] > string[j+2])
            {
                temp = string[j];
                string[j] = string[j+2];
                string[j+2] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}