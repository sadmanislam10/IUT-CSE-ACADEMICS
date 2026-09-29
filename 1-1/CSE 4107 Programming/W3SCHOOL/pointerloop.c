#include <stdio.h>
int main()
{
    int num[4] = {10, 20, 50, 10};
    int *p = num;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *p); 
        p++;
    }

    //Tip: This way of looping is common when working directly with memory, since the pointer itself moves through the array instead of using an index number.

    return 0;
}