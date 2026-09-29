/*

Why knowing addresses (and using pointers) is useful
--Direct memory access
You can access and manipulate memory directly — which is faster and gives you fine control.

Example:

*/

#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    // ptr means pointer to the integar x that can store the address of an int
    // &x means address of x
    // &x = ptr both are same --means address of x

    printf("%p\n", ptr);
    printf("%p\n", &x);

    return 0;
}