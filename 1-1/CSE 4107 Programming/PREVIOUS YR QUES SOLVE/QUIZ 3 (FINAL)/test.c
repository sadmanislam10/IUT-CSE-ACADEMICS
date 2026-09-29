#include <stdio.h>
int main()
{
   int size1;
   scanf("%d", &size1);

   int arr1[size1];

   for (int i = 0; i < size1; i++)
   {
      scanf("%d", &arr1[i]);
   }

   int size2;
   scanf("%d", &size2);

   int arr2[size2];

   for (int i = 0; i < size2; i++)
   {
      scanf("%d", &arr2[i]);
   }

   int totalsum = 0;
   for (int i = 0; i < size1; i++)
   {
      totalsum += arr1[i]; // total sum done
   }

   int sum_of_given_index = 0;

   for (int i = 0; i < size2; i++)
   {
      int index = arr2[i];
      sum_of_given_index += arr1[index]; // total sum of the indexes done
   }

   int unused_in_arr1 = totalsum - sum_of_given_index;

   int difference = unused_in_arr1 - sum_of_given_index;

   printf("%d", difference);

   return 0;
}