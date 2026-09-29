#include <stdio.h>

void nameadd(char name[]) 
{
    printf("Hello %s\n", name); // name == parameter
}

int main()
{
    nameadd("Sadman"); // sadman == arguments
    nameadd("Islam");
    nameadd("Messi");

    return 0;
}