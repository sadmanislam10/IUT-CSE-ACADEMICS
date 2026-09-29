#include <stdio.h>

union size
{
    int x;
    char name[30];
    int age;
};

int main()
{
    union size p;

    printf("Size of union %zu bytes\n", sizeof(p));

    return 0;
}

// The size of a union is determined by its largest member.
// Additionally, padding may be added to satisfy memory alignment requirements.
// In this union, 'name[30]' is the largest member (30 bytes),
// and padding rounds the total size up to 32 bytes.
