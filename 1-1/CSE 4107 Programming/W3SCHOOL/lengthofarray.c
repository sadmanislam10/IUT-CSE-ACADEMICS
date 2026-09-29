// length = elements in array

#include <stdio.h>
int main()

{
    int array[] = {1, 4, 5, 3, 5};
    int len = sizeof(array) / sizeof(array[0]);

    printf("%d", len);

    return 0;
}