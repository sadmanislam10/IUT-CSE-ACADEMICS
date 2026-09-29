#include <stdio.h>
int main()
{
    printf("%s\n", __FILE__);
    // prints the file name

#define x int

    x a = 5; // now x is working as int
    printf("%d", a);
    

    return 0;
}