// hoy nai

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        int temp1 = num;
        int temp2 = num;

        if (num % 7 == 0)
        {
            printf("%d\n", num);
            continue;
        }

        while (temp1 % 7 != 0)
        {
            temp1++;
        }
        while (temp2 % 7 != 0)
        {
            temp2--;
        }

        if (temp1-num>num-temp2)
        {
            printf("%d\n", temp2);
        }
        else
        {
            printf("%d\n", temp1);
        }
        
    }

    return 0;
}