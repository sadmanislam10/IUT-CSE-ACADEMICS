/*
Both regular functions and inline functions work the same way.
The only difference is that the inline version suggests to the compiler to copy the function's code directly where it is used.
*/

#include <stdio.h>

inline int func(int x, int y)
{

    return x * y;
}

int main()
{
    int result = func(3, 2);
    printf("%d\n", result);

    return 0;
}