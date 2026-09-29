#include <stdio.h>
int main()
{
    char arr[10];

    int digit, character;
    digit = 0;
    character = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf(" %c", &arr[i]);

        if (arr[i] >= '0' && arr[i] <= '9')
        {
            digit++;
        }

        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            character++;
        }

        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            character++;
        }
    }

    printf("Total Digits: %d\n", digit);
    printf("Total Characters: %d\n", character);

    return 0;
}