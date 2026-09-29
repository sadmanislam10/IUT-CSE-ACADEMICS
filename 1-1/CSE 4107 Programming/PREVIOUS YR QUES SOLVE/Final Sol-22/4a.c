#include <stdio.h>

// void hello_world(char *x)
// {
//     printf("hello_world");
// }

// need to print hello_world without changing anything in main func

// 2. using macro
#define hello_world(x) printf("hello_world");

int main()
{
    hello_world("printf()");

    return 0;
}