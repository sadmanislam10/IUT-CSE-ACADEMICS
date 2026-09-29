#include <stdio.h>

void toprint()
{
    printf("This function is used to print something\n");
}
int main()
{

    toprint();
    toprint(); // can be used multiple times
    toprint();
    return 0;
}