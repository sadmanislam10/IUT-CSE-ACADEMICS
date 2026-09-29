/*
Concatenate Strings
To concatenate (combine) two strings, you can use the strcat() function:
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char text1[100] = "Sadman ";
    char text2[100] = "Islam";

    // // Concatenate str2 to str1 (result is stored in str1)

    strcat(text1, text2);

    printf("%s", text1);

    return 0;
}
