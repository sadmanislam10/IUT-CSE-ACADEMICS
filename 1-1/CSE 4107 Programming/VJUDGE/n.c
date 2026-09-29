#include <stdio.h>
int main()
{
    long long totalstick, eachturn;
    scanf("%lld %lld", &totalstick, &eachturn);

    int turn_no, left;

    turn_no = totalstick / eachturn;
    left = totalstick % eachturn;

    if (turn_no % 2 != 0 && left < eachturn)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}