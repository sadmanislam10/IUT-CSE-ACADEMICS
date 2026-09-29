#include <stdio.h>
#include <string.h>

int main()
{
    char string1[1000], string2[1000], string3[1000];

    scanf("%s %s %s", string1, string2, string3);

    int len1, len2, len3;

    // len1 = strlen(string1);
    // len2 = strlen(string2);
    len3 = strlen(string3);

    char string_one_two[2000] = {""}; // \0 ? ? ? ? ...

    // It finds '\0' at index 0 and starts copying from there.
    //  Think of '\0' as end of the string 
    //  Without it → C doesn't know where the string ends

    strcat(string_one_two, string1);
    strcat(string_one_two, string2);

    int len_one_two;
    len_one_two = strlen(string_one_two);

    for (int i = 0; i < len_one_two - 1; i++)
    {
        for (int j = i + 1; j < len_one_two; j++)
        {
            if (string_one_two[j] > string_one_two[i])
            {
                int temp1;
                temp1 = string_one_two[i];
                string_one_two[i] = string_one_two[j];
                string_one_two[j] = temp1;
            }
        }
    }

    for (int i = 0; i < len3 - 1; i++)
    {
        for (int j = i + 1; j < len3; j++)
        {
            if (string3[j] > string3[i])
            {
                int temp2;
                temp2 = string3[i];
                string3[i] = string3[j];
                string3[j] = temp2;
            }
        }
    }

    if (strcmp(string3, string_one_two) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    // for (int i = 0; i < len1 - 1; i++)
    // {
    //     for (int j = i + 1; j < len1; j++)
    //     {
    //         if (string1[j] > string1[i])
    //         {
    //             int temp1;
    //             temp1 = string1[i];
    //             string1[i] = string1[j];
    //             string1[j] = temp1;
    //         }
    //     }
    // }

    // for (int i = 0; i < len2 - 1; i++)
    // {
    //     for (int j = i + 1; j < len2; j++)
    //     {
    //         if (string2[j] > string2[i])
    //         {
    //             int temp1;
    //             temp1 = string2[i];
    //             string2[i] = string2[j];
    //             string2[j] = temp1;
    //         }
    //     }
    // }

    return 0;
}