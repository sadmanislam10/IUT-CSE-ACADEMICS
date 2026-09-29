/*

\t in C (and many other programming languages) is an escape sequence that represents a tab space — it moves the cursor to the next tab stop in the output.

Think of it as adding a few spaces at once (usually 4 or 8 spaces, depending on the environment).

*/

#include <stdio.h>
int main()
{
    printf("Car \t Sir \t Bar");

    return 0;
}