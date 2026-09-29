#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], rev[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        rev[i] = arr[n - 1 - i];
    }

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (rev[i] == i)
        {
            printf("%d ", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("None");
    }

    return 0;
}