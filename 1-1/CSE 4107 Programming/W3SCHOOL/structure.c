#include<stdio.h>

struct structure 
{
    int num;
    char name;
};


int main()
{
    struct structure s1;

    s1.num = 1;
    s1.name = "S";

    printf("%d\n",s1.num);
    printf("%c\n",s1.name);

   

   return 0;
}