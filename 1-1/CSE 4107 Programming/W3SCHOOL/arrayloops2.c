// making better loops

#include <stdio.h>
int main()
{
    int num[] = {2, 3, 10, 4, 10};
    int len = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < len; i++)
    {
        printf("%d\n", num[i]); // by using this format we can print all the elements of array

        //This loop will automatically work no matter how many elements the array has!
    }

    return 0;
}