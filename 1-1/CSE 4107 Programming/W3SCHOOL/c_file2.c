#include<stdio.h>
int main()
{
   FILE *fptr;

   fptr = fopen("name.txt", "a");

   fprintf(fptr, "\nMuri khai!");

   fclose(fptr);

   return 0;
}