#include <stdio.h>

void function(int num[4])
{

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", num[i]);
    }
}

int main()
{
    int num[4] = {1, 2, 4,5};

    function(num);

    return 0;
}