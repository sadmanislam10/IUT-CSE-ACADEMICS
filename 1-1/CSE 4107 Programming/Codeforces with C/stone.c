// hoy ni

#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a;
    scanf("%d", &a);

    int stone1, stone2, totalstone;

    stone1 = n / a;

    stone2 = m / a;

    totalstone = stone1 + stone2;

    printf("%d", totalstone);

    return 0;
}