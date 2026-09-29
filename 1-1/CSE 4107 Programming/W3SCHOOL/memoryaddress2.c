#include<stdio.h>
int main()
{
    int mynum[4] = {10,30,50,10};

    // get the memory adress of mynum
    printf("%p\n", mynum);

    // get the memory adress of first element of mynum
    printf("%p\n", &mynum[0]);

    return 0;
}