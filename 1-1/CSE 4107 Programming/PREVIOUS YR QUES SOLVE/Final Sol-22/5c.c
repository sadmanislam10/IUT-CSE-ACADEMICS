#include <stdio.h>
#include <string.h>

void select(char list[5][30])
{
    char *organizer = list[0];
    int x;

    for (int i = 0; i < 5; i++)
    {
        if ((x = strcmp(list[i], organizer)) < 0)
        {
            organizer = list[i];
        }
    }

    printf("Organizer is: %s\n", organizer);
}

int main()
{
    char list[5][30] = {"Sadman", "Rayed", "Fahim", "Ayaan", "Arif"};

    select(list);

    return 0;
}