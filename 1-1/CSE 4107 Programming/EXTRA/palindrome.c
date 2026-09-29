// #include <stdio.h>
// #include <string.h>

// void isPalindrome(char str[], int start, int end)
// {
//     if (start >= end)
//     {
//         return;
//     }

//     char temp;
//     temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     isPalindrome(str, start + 1, end - 1);
// }
// int main()
// {

//     char str[100];
//     scanf("%s", str);

//     int len = strlen(str);

//     isPalindrome(str, 0, len - 1);

//     printf("%s", str);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int ispalindrome(char str[], int start, int end)
{
    if (start >= end) // checks if it has come to the middle part
    {
        return 1;
    }
    if (str[start] != str[end])
    {
        return 0;
    }

    return ispalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    scanf("%s", str);

    printf("%d", ispalindrome(str, 0, strlen(str) - 1));

    return 0;
}