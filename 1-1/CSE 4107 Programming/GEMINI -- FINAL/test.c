#include <stdio.h>

#define sqr(a) ((a) * (a))
#define max(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int a = sqr(5);

    int b = max(10, 1);

    printf("%d %d", a, b);

    return 0;
}