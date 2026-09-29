#include <stdio.h> // painnnnnnnnn
int main()
{
   int n;
   scanf("%d", &n);

   char string[1000];
   scanf("%s", &string);

   int count8 = 0;

   for (int i = 0; i < n; i++)
   {
      if (string[i] == '8')
      {
         count8++;
      }
   }

   int x = n / 11;
   if (count8 >= x)
   {
      printf("%d", x);
   }
   else if (x > count8)
   {
      printf("%d", count8);
   }
   else if (count8 == 0)

   {
      printf("%d", 0);
   }

   return 0;
}