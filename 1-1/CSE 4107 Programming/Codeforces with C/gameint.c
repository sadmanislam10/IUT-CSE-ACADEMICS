#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int num;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);

        if (((num + 1) % 3 == 0) || ((num - 1) % 3 == 0))
        {
            printf("First\n");
        }
        else
        {
            printf("Second\n");
        }
    }

    return 0;
}