#include<stdio.h>

void intro(char name[], int age)
{
    printf("My name is %s and age is %d \n", name, age);
}
int main()
{
   intro("Sadman", 21);

   return 0;
}