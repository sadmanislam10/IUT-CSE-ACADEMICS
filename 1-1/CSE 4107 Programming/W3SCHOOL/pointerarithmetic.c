#include<stdio.h>
int main()
{
    int num[4] = {100,10,19,20};
    int *p = num; // points to num[0] //Go to the address stored in p and get the value there.

    printf("%d\n", *p);
    printf("%d\n", *(p+1));

    printf("%d\n", *(p+2));




    return 0;
}