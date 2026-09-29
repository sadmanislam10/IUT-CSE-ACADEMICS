#include <stdio.h>
int main()
{
    int num[] = {10, 40, 20, 50};

    printf("%zu", sizeof(num));

    // sizeof operator returns the size in bytes

    // int is usually 4bytes , so output is 16bytes bcoz 4x4=16bytes

    return 0;
}