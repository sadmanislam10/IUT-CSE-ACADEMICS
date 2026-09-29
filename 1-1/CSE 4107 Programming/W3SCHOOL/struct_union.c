#include <stdio.h>

struct S
{
    int x;
    char y;
    int z;
};

union U
{
    int m;
    char n;
    int b;
};

int main()
{
    printf("Size of Struct %zu\n", sizeof(struct S));
    printf("Size of Struct %zu\n", sizeof(union U));

    // Struct - members are stored one after another, so padding is added between them.
    // Union - all members share the same memory, so only the largest member decides its total size.

    return 0;
}