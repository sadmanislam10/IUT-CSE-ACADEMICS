#include <stdio.h>
#include <string.h>

int main()
{
    int id;
    scanf("%d", &id);

    int batch = id / 10000000;
    int dept = (id % 10000000) / 10000;
   
    // int section = ((id % 100000) / 100) % 10;
    int section = ((id%1000000)/100)%10;

    char department[10];

    if (dept == 1)
    {
        strcpy(department, "MPE");
    }
    else if (dept == 2)
    {
        strcpy(department, "EEE");
    }
    else if (dept == 3)
    {
        strcpy(department, "TVE");
    }
    else if (dept == 4)
    {
        strcpy(department, "CSE");
    }
    else if (dept == 5)
    {
        strcpy(department, "CEE");
    }
    else if (dept == 6)
    {
        strcpy(department, "BTM");
    }

    printf("Batch: %d,Department: %s,Section: %d", batch, department, section);

    return 0;
}