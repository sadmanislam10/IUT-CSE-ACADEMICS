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

    *ptr = 20; // *ptr means go to the address stored in ptr then store 20

    printf("%d", x);

    return 0;
}