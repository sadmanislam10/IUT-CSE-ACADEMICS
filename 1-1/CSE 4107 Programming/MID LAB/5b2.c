#include <stdio.h>
int main()
{
    int n, min, found = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n <= 0)
            break;

        if (found == 0)
        {
            min = n;
            found = 1;
        }
        else if (n < min)
        {
            min = n;
            found = 1;
        }
    }

    if (found)
    {
        printf("Smallest number is:  %d", min);
    }
    else
    {
        printf("Smallest number is:  NONE");
    }
    

    return 0;
}