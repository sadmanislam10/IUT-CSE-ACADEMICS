#include<stdio.h>
int main()
{
   int num = 10;
   int *ptr = &num;
   int **pptr = &ptr;

   printf("num   = %d\n", num);
   printf("*ptr  = %d\n", *ptr);
   printf("**ptr = %d\n", **pptr);

   return 0;
}