#include <stdio.h>
int main()

{
    int max;
    scanf("%d", &max);

    int arr[101] = {0};

    int n1, num1;
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &num1);
        arr[num1] = 1;
    }

    int n2, num2;
    scanf("%d", &n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &num2);
        arr[num2] = 1;
    }

    int flag = 1;

    for (int i = 1; i <= max; i++)
    {
        if (arr[i] == 0)
        {
            flag = 0;
        }
    }

    if (!flag)
    {
        printf("Oh, my keyboard!");
    }
    else
    {
        printf("I become the guy.");
    }

    return 0;
}