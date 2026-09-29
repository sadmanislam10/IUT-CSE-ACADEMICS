/*
// void = function returns nothing
// printf() = prints output on the screen (for the user)
// return = sends a value back to the calling function (for the program)

// printf is for DISPLAY
// return is for SENDING DATA

// main() must be int because it returns a status code to the OS
// other functions: use int/float/char when returning something, use void when not returning
*/

#include <stdio.h>

void hello()
{
    printf("Hello Everyone!!\n"); // only gives output ...nothing returns to program
}

int addfive(int x)
{
    return x + 5; // returns something to program
}

int main()
{
    hello();

    int result = addfive(15);

    printf("%d\n", result);

    return 0;
}