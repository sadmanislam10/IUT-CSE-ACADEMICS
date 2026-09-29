#include <stdio.h>
int main()
{
    char info[] = "25 June 2026";

    int day, year;
    char month[20];

    // using sscanf to extract data from the info string

    sscanf(info, "%d %s %d", &day, month, &year);

    printf("Day: %d\n", day);
    printf("Month: %s\n", month);
    printf("Year: %d\n", year);

    return 0;
}