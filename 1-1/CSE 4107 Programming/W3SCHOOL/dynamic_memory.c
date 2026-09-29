/*

Dynamic memory is memory that is allocated after the program starts running.
Allocation of dynamic memory can also be referred to as runtime memory allocation.

Dynamic memory does not belong to a variable, it can only be accessed with pointers.

To allocate dynamic memory, you can use the malloc() or calloc() functions.
It is necessary to include the <stdlib.h> header to use them. 
The malloc() and calloc() functions allocate some memory and return a pointer to its address.

The data in the memory allocated by malloc() is unpredictable. To avoid unexpected values, make sure to write something into the memory before reading it.

Unlike malloc(), the calloc() function writes zeroes into all of the allocated memory. However, this makes calloc() slightly less efficient.

The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.

The calloc() function has two parameters:

amount - Specifies the amount of items to allocate
size - Specifies the size of each item measured in bytes

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *students;
    int numStudents = 12;

    students = calloc(numStudents, sizeof(*students));

    printf("%d", numStudents * sizeof(*students));
   

   return 0;
}