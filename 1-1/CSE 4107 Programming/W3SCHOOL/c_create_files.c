/*
filename	The name of the actual file you want to open (or create), like filename.txt
mode	A single character, which represents what you want to do with the file (read, write or append):
w - Writes to a file
a - Appends new data to a file
r - Reads from a file

*/
#include<stdio.h>
int main()
{
   FILE *fptr;

   // create a file
   fptr = fopen("file.txt", "w");

   //close the file
   fclose(fptr);

   return 0;
}