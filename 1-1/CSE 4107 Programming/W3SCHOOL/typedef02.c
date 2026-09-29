#include <stdio.h>

typedef struct
{
    char name[100];
    int jersey;
    char nationality[100];
} Footballer;

int main()
{
    Footballer player1 = {"Messi", 10, "Argentina"};
    Footballer player2 = {"Ronaldo", 7, "Portugal"};
    Footballer player3 = {"Neymar", 11, "Brazil"};

    printf("%s %d %s\n", player1.name, player1.jersey, player1.nationality);
    printf("%s %d %s\n", player2.name, player2.jersey, player2.nationality);
    printf("%s %d %s\n", player3.name, player3.jersey, player3.nationality);

    return 0;
}