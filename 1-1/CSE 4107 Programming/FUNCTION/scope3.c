#include <stdio.h>

int x = 10;

void func()
{
    printf("%d\n", ++x);
}

int main()
{

    func();

    printf("%d\n", x); // changes the global variable as well

    return 0;
}