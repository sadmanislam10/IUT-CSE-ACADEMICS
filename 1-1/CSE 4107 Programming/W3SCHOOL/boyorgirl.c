#include <stdio.h>
#include <string.h>
int main()
{
    char username[100];
    int num;

    scanf("%s", username);

    num = strlen(username);

    if (num % 2 == 0)
    {
        printf("IGNORE HIM!");
    }
    
    else
    {
        printf("CHAT WITH HER!");
    }

    return 0;
}