#include <stdio.h>
#include <string.h>

void sortString(char arr[5][50])
{
    int i, j;
    int temp[50]; 

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(arr[j], arr[i]) < 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}
int main()
{
    char wordlist[5][50] = {"HELLO", "HAPLE", "BALL", "DOG", "MESSI"};

    sortString(wordlist);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", wordlist[i]);
    }

    return 0;
}