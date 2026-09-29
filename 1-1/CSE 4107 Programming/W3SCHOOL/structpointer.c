#include <stdio.h>

struct Car
{
    char brand[100];
    int year;
};

int main()
{
    struct Car info = {"BMW", 1990};

    struct Car *ptr = &info;  // // Declare a pointer to the struct

    
    // Access members using the -> operator
    
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d\n", ptr->year);

    return 0;
}