// %p = prints pointer = shows the memory address of the variable(Hexadecimal)...for example my age in this case
// &myage is often called a pointer..a pointer basically stores the memory address of a variable
#include <stdio.h>
int main()
{
    int myage = 20;

    printf("%p", &myage);

    return 0;
}