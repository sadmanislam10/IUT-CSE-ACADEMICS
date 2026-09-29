#include <stdio.h>
int main()
{
    char carname[8] = "Corolla";

    int len = sizeof(carname) / sizeof(carname[0]);

    for (int i = 0; i < len; i++)
    {
        printf("%c\n", carname[i]);
    }

    return 0;
}