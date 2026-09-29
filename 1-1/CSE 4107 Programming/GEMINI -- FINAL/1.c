/*

Combo 1: Arrays + Strings + Functions (The Validator)
Inspired by the 2022-2023 SMS parser and 2021-2022 Password validator.

The Setup: You need to validate university IDs. A valid ID is exactly 9 characters long and must start with the characters "23".
The Task:

Write a function int isValidID(char id[]). It should return 1 if the string length is exactly 9 AND the first two characters are '2' and '3'. Otherwise, return 0.

In main, declare an array of strings (a 2D char array) to hold 3 different IDs.

Use a loop to take input for these 3 IDs.

Pass each ID to your function. If it returns 1, print "[ID] is Valid". If 0, print "[ID] is Invalid".
*/

#include <stdio.h>
#include <string.h>

int isValid(char id[])
{

    int len;
    char first = id[0], second = id[1];

    len = strlen(id);

    if (len == 9 && first == '2' && second == '3')
    {
        return 1;
    }

    return 0;
}

int main()
{
    char id[3][10];

    for (int i = 0; i < 3; i++)
    {
        scanf("%s", id[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        int x;
        x = isValid(id[i]);

        if (x)
        {
            printf("%s: Valid\n", id[i]);
        }
        else
        {
            printf("%s: Invalid\n", id[i]);
        }
    }

    return 0;
}