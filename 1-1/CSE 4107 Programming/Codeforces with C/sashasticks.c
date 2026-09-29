
#include <stdio.h>
int main()
{
    long long totalsticks, takeout;
    scanf("%lld %lld", &totalsticks, &takeout);

    long long turn = totalsticks / takeout;

    long long left = totalsticks % takeout;

    if (turn % 2 != 0 && (left == 0 || left < takeout))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}