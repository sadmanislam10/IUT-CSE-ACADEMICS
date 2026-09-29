#include <stdio.h>
int main()
{
    int num[100] = {10, 30, 16, 40};
   

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", &num);
    }

    return 0;
}