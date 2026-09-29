#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int input[n];

    while (n--)
    {

        int t, count = 0, max = 0;
        scanf("%d", &t);

        for (int i = 0; i < t; i++)
        {
            scanf("%d", &input[i]);

            if (input[i] == 0)
            {
                count++;
            }

            if (input[i] == 1)
            {
                count = 0;
            }
            if (count > max)
            {
                max = count;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}