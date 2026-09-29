#include <stdio.h>
int main()
{

    int health, moves;
    scanf("%d %d", &health, &moves);

    int healthdec[moves];

    for (int i = 0; i < moves; i++)
    {
        scanf("%d", &healthdec[i]);
    }

    int sum = 0;
    for (int i = 0; i < moves; i++)
    {
        sum += healthdec[i];
    }

    if (sum >= health)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}