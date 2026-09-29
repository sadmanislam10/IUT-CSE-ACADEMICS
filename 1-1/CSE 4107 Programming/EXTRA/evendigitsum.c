#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num[n], even = 0, sum = 0, rem, temp;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

        while (num[i] > 0)
        {
            rem = num[i] % 10;
            sum += rem;
            num[i] /= 10;
        }
        temp = sum;
        sum = 0;

        if (temp % 2 == 0)
        {
            even++;
        }
    }
    printf("Count: %d", even);

    return 0;
}