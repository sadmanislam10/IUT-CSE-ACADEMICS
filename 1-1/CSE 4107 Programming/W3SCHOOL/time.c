// time_t is a data type used to store time in C.

#include<stdio.h>
#include<time.h>

int main()
{
    time_t currenttime; // declare a  variable stores the time in sec since 1970

    time(&currenttime);  // gets the real time and stores in current time

    printf("Current time: %s \n", ctime(&currenttime));
    
    // ctime converts sec time in raw time


    
   

   return 0;
}