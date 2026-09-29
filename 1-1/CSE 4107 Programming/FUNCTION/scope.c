#include <stdio.h>

// global variable x

int x;

void function()
{
    x = 5;
    printf("%d\n", x);
}

int main()
{
    function();

    x = 10;

    printf("%d\n", x);

    return 0;
}