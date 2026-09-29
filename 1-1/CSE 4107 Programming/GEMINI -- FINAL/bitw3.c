#include <stdio.h>
int main()
{
    int num = 1;

    int thirdlast_element = (1 << 3);

    int res = thirdlast_element & 1;

    if (res == 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}