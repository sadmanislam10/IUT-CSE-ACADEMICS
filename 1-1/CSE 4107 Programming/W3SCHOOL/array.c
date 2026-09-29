/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list inside curly braces, and make sure all values are of the same data type:

int myNumbers[] = {25, 50, 75, 100};

*/

#include <stdio.h>
int main()
{
    int mynums[] = {10, 5, 20, 30};
    printf("%d\n", mynums[0]);
    // Array indexes start with 0: [0] is the first element. [1] is the second element, etc.

    printf("%d\n", mynums[3]);

    return 0;
}