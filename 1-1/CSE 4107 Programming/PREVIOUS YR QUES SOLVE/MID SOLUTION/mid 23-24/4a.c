#include <stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);

    num = n;

    int rem, sum = 0, temp;

    while (n > 0)
    {
        rem = n % 10;
        sum = (sum * 10) + rem;
        n /= 10;
    }

    temp = sum;

    printf("%d", num - temp);
    return 0;
}