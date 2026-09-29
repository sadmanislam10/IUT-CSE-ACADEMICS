#include <stdio.h>
#include <limits.h>

typedef struct
{
    char name[50];
    int matchPlayed;
    int points;

} Team;

void printTopTeam(Team t[], int size)
{
    int max = INT_MIN;
    int index;

    for (int i = 0; i < size; i++)
    {
        if (t[i].points > max)
        {
            max = t[i].points;
            index = i;
        }
    }
    printf("%s\n", t[index].name);
}

int main()
{
    Team team[3];

    printf("Input 3 teams name , matches played & points\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %d", team[i].name, &team[i].matchPlayed, &team[i].points);
    }

    printTopTeam(team, 3);

    return 0;
}