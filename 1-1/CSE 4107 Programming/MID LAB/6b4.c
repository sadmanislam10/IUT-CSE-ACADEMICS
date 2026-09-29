#include <stdio.h>
int main()
{
    int n, num, rem, sum = 0, temp, found = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        temp = num;

        while (temp > 0)
        {
            rem = temp % 10;
            sum = (sum * 10) + rem;
            temp /= 10;
        }
        if (num == sum)
        {
            printf("%d ", num);
            found = 1;
        }

        sum = 0;
    }
    if (!found)
    {
        printf("NONE");
    }
    

    return 0;
}