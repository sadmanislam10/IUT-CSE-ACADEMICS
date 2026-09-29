#include <stdio.h>
#include <string.h>

void sortString(char arr[4][50])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 1 + i; j < 4; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                char temp[50];
                
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", arr[i]);
    }
}

int main()
{
    char arr[4][50];

    for (int i = 0; i < 4; i++)
    {
        scanf("%s", arr[i]);
    }

    sortString(arr);
    return 0;
}