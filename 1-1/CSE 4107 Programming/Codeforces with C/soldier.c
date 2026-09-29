#include <stdio.h>
int main()
{
    int k, w, n, price = 0, borrow;
    scanf("%d %d %d", &k, &n, &w);

    for (int i = 1; i <= w; i++)
    {

        price = price + (k * i);
    }

    borrow = price - n;

    if (borrow > 0)
    {
        printf("%d", borrow);
    }

    else
    {
        printf("%d", 0);
    }

    return 0;
}