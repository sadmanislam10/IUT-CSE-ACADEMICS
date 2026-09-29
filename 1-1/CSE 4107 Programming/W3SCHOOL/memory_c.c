// Static memory is memory that is reserved for variables before the program runs.
// Allocation of static memory is also known as compile time memory allocation.

#include <stdio.h>
int main()
{
    int x;
    float y;
    double z;
    char m;
    int student[40];

    printf("Size of int is %zu bytes\n", sizeof(x));
    printf("Size of float is %zu bytes\n", sizeof(y));
    printf("Size of double is %zu bytes\n", sizeof(z));
    printf("Size of char is %zu bytes\n", sizeof(m));

    printf("Size of student is %zu bytes\n", sizeof(student));

    return 0;
}