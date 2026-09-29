#include <stdio.h>
int main()
{
    int n, num;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &num);

        int rem, index = 1, arr[50], count = 0;

        while (num > 0)
        {
            rem = num % 10;

            if (rem != 0)
            {
                arr[count] = rem * index;
                count++;
            }

            index *= 10;
            num /= 10;
        }

        printf("%d\n", count);

        for (int i = 0; i < count; i++)
        {
            printf("%d ", arr[i]);
        }
        }

    return 0;
}