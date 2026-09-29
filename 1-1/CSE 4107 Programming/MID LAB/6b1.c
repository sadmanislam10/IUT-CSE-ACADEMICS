#include <stdio.h>
int main()
{
    int n, num, sum = 0, remainder, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        while (num > 0)
        {
            remainder = num % 10;
            sum += remainder;
            num /= 10;
        }
        if (sum % 2 == 0)
        {
            count++;
        }
        sum = 0;
    }
    printf("Count:  %d", count);

    return 0;
}