#include <stdio.h>
int main(void)
{
   int i = 2;

   int ar1[] = {2, 1, 3};
   int ar2[5] = {4, 5, 6};
   int ar3[5] = {[3] = 7};

   printf("%d\n", ar1[i]++);

   printf("%d\n", ++ar1[i]);

   printf("%d\n", ar2[i++]);
   printf("%d\n", ar3[++i]);
   return 0;
}