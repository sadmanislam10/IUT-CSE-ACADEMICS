#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    int flag = 0;

    int arr[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    for (int i = 0; i < 14; i++)
    {
        if (num % arr[i] == 0)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}