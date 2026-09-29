#include <stdio.h>

struct Owner
{
    char firstname[100];
    char lastname[100];
};

struct carinfo
{
    char brand[100];
    int year;
    struct Owner owner; // nested structure
};

int main()
{

    struct Owner person = {"Sadman", "Islam"};

    struct carinfo car1 = {"Nissan", 2000, person};

    printf("%s %d ", car1.brand, car1.year);
    printf("%s %s ", car1.owner.firstname, car1.owner.lastname); // peraaaaa

    return 0;
}