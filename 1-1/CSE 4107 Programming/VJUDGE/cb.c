#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char arr[n + 1];
    scanf("%s", arr);

    int count = 0;

    if (n % 2 != 0)
    {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[i + (n / 2)])
        {
            count++;
        }
    }

    if (count == (n / 2))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}