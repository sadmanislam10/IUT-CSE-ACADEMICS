#include<stdio.h>
int main()
{
   int N;
   scanf("%d", &N);

   char A[N];


   for (int i = 0; i < N; i++)
   {
    
    scanf(" %c", &A[i]);
    printf("%c\n", A[i]);

   }
   

   return 0;
}