// #include <stdio.h>
// int main()
// {
//    int year, flag = 0;
//    int rem1, rem2, rem3, rem4, temp;
//    scanf("%d", &year);

//    while (!flag)
//    {
//       temp = ++year;
//       rem1 = temp % 10;
//       temp = temp / 10;
//       rem2 = temp % 10;
//       temp = temp / 10;
//       rem3 = temp % 10;
//       temp = temp / 10;
//       rem4 = temp % 10;
//       temp = temp / 10;

//       if (rem1 != rem2
//          && rem1 != rem3
//          && rem1 != rem4
//          && rem2 != rem3
//          && rem2 != rem4
//          && rem3 != rem4)
//       {
//          flag = 1;
//       }
//    }
//    if (flag)
//    {
//       printf("%d", year);
//    }

//    return 0;
// }

// another solve
#include <stdio.h>
int main()
{
   int year;
   scanf("%d", &year);

   int flag = 0;

   while (!flag)
   {
      year++;

      char string[5];

      sprintf(string, "%d", year); // converts int to char

      if (string[0] != string[1] &&
          string[0] != string[2] && 
          string[0] != string[3] && 
          string[1] != string[2] && 
          string[1] != string[3] && 
          string[2] != string[3])
      {
         flag = 1;
      }
   }

   if (flag)
   {
      printf("%d", year);
   }
   

   return 0;
}