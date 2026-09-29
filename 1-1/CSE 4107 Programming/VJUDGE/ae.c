#include <stdio.h>
int main()
{
    int player1, player2, range1, range2;
    scanf("%d %d %d %d", &player1, &player2, &range1, &range2);

    if (player1 == player2)
    {
        printf("Second");
    }
    else if (player1 > player2)
    {
        printf("First");
    }
    else if (player2 > player1)
    {
        printf("Second");
    }

    return 0;
}