// goated

#include <stdio.h>

int main()
{
    
    int milisec;
    scanf("%d", &milisec);


    int time = milisec/1000; // milisec
    
    int hour, min, sec,msec;

    hour = time / 3600;
    min = (time % 3600) / 60;
    sec = time % 60;

    int n_ms = milisec%1000;

    printf("%02d:%02d:%02d:%03d", hour, min, sec,n_ms);

    return 0;
}