#include <stdio.h>
int main()

{
   int n, num, temp, rem, sum = 0, max = -1, answer;
   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
      scanf("%d", &num);

      temp = num;

      while (temp > 0)
      {
         rem = temp % 10;
         sum += rem;
         temp /= 10;
      }

      if (sum > max)
      {
         max = sum;
         answer = num;
      }
      sum = 0;
   }

   printf("Largest Digit Sum: %d", answer);

   return 0;
}