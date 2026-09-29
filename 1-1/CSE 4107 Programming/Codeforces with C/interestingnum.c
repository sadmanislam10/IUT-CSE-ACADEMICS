#include <stdio.h>
int main()
{
    int num, n, sum = 0, temp, nnum, x;
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        n = num % 10;
        sum += n;
        num /= 10;
    }
    if (sum % 4 == 0)
    {
        printf("%d", temp);
    }
    else
    {
        while (1)
        {
            sum = 0;
            temp++;
            nnum = temp;

            while (nnum > 0)
            {
                x = nnum % 10;
                sum += x;
                nnum /= 10;
            }

            if (sum % 4 == 0)
            {
                printf("%d", temp);
                break;
            }
        }
    }

    return 0;
}