#include <stdio.h>

void conversion(int totalsec, int *hour, int *min, int *sec)
{
    *hour = totalsec / 3600;
    *min = (totalsec % 3600) / 60;
    *sec = (totalsec % 3600) % 60;
}

int main()
{
    int total_sec;
    scanf("%d", &total_sec);

    int hour, min, sec;

    conversion(total_sec, &hour, &min, &sec);

    printf("%d sec means %dH:%dM:%dS\n", total_sec, hour, min, sec);

    return 0;
}