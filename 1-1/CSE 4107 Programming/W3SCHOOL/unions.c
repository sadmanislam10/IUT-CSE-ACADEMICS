/*

A union is similar to a struct in that it can store members of different data types.

However, there are some differences:

In a struct, each member has its own memory.
In a union, all members share the same memory, which means you can only use one of the values at a time.

*/

#include <stdio.h>
#include <string.h>

union Union
{
    char name[100];
    int age;
    int class;
};

int main()
{
    union Union info;

    strcpy(info.name, "Sadman Islam");
    printf("Name: %s\n", info.name);

    info.age = 20;
    printf("Age: %d\n", info.age);

    info.class = 13;
    printf("Class: %d\n", info.class);

    return 0;
}