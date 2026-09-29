/*
Multidimensional Arrays
In the previous chapter, you learned about arrays, which is also known as single dimension arrays. These are great, and something you will use a lot while programming in C. However, if you want to store data as a tabular form, like a table with rows and columns, you need to get familiar with multidimensional arrays.

A multidimensional array is basically an array of arrays.

Arrays can have any number of dimensions. In this chapter, we will introduce the most common; two-dimensional arrays (2D).


*/

#include <stdio.h>
int main()

{
    // 2D array also known as matrix array

    int matrix[2][3] = {{1, 3, 5}, {9, 10, 12}};
    printf("%d", matrix[0][0]);

    return 0;
}