// typedef can be useful with struct, because it lets you avoid writing struct every time:

#include <stdio.h>

typedef struct
{
    char name[100];
    int year;

} Car;

int main()
{
    Car car = {"BMW", 1995};

    printf("%s %d", car.name, car.year);

    return 0;
}