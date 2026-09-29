#include<stdio.h>
int main()
{
   int numofsongs, totaltime;

   scanf("%d %d", &numofsongs, &totaltime);

   int songtime[numofsongs];

   for (int i = 0; i < numofsongs;  i++)
   {
    scanf("%d", &songtime[i]);
   }

   

   

   return 0;
}