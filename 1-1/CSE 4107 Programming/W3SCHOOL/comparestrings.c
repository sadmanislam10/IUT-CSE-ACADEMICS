/*

// Compare Strings --- cmp=compare
To compare two strings, you can use the strcmp() function.

It returns 0 if the two strings are equal, otherwise a value that is not 0:


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char text1[] = "hello";
    char text2[] = "hello";
    char text3[] = "hi";

    printf("%d\n", strcmp(text1, text2));
    printf("%d\n", strcmp(text2, text3));
    

    return 0;
}