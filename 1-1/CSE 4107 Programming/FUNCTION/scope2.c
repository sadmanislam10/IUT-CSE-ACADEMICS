// we can operate with the same variable name 
// using local & global variable

#include<stdio.h>

int x = 1;

void func()
{
    int x = 10;
    printf("%d\n", x);
}

int main()
{
    func(); // refers to the local variable
    
    printf("%d", x); // refers to the global variable
   

   return 0;
}

