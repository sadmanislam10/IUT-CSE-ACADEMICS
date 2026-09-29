#include <stdio.h>

struct structure
{
    char brand[100];
    char name[100];
    int year;
};

int main()
{
    struct structure car1 = {"Tayota", "X-Corolla", 1970};
    struct structure car2 = {"Audi", "A8", 1990};
    struct structure car3 = {"Honda", "Vezel", 2000};

    printf("%s %s %d\n", car1.brand, car1.name, car1.year);
    printf("%s %s %d\n", car2.brand, car2.name, car2.year);
    printf("%s %s %d\n", car3.brand, car3.name, car3.year);
    
    return 0;
}