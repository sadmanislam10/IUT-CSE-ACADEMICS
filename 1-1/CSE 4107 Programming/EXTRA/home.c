#include <stdio.h>
int main()
{
    int Cgm, Cms, Cgs;

    scanf("%d %d %d", &Cgm, &Cms, &Cgs);

    int total_gms = Cgm + Cms;

    if (total_gms < Cgs)
    {
        printf("Via Metro");
    }
    else if (total_gms == Cgs)
    {
        printf("Equal");
    }

    else
    {
        printf("Direct");
    }

    return 0;
}