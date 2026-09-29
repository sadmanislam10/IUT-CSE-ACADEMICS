#include<stdio.h>
int main()
{
    int math[3] = {10,50,60};

    int *p = math; // *p = go to the address stored in p and get the value from there

    printf("%d\n", *p);
    
    p++;

    printf("%d\n", *p);

    p--;
    printf("%d\n", *p);

    p += 2;
    printf("%d\n", *p);

    return 0;
}