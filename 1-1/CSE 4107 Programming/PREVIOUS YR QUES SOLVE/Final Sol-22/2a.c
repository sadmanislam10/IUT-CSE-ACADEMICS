#include <stdio.h>
#include <stdlib.h>

int func(int seatplan[30][20], int myid, int friendid)
{
    int r1, r2, c1, c2;

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if (seatplan[i][j] == myid)
            {
                r1 = i;
                c1 = j;
            }
            if (seatplan[i][j] == friendid)
            {
                r2 = i;
                c2 = j;
            }
        }
    }

    int distance;
    distance = abs(r1 - r2) + abs(c1 - c2);

    return distance;
}

int main()
{

    int myid, friendid;
    scanf("%d %d", &myid, &friendid);

    int seatplan[30][20];

    int value = 1;

    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            seatplan[i][j] = value;
            value++;
        }
    }

    int x = func(seatplan, myid, friendid);

    printf("%d", x);

    return 0;
}