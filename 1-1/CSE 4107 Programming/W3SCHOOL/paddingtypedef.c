#include <stdio.h>

struct example
{
    int a; // 1byte
    char b; // 4 bytes
    int x; // 1 byte
};

int main()
{

    printf("total is %zu bytes\n", sizeof(struct example));

    return 0;
}

/*

Member	Bytes	Notes
a	1	Stored first
padding	3	Added so b starts at a multiple of 4
b	4	Aligned to 4-byte boundary
c	1	Stored next
padding	3	Added to make total size a multiple of 4
Total = 1 + 3 + 4 + 1 + 3 = 12 bytes.



*/