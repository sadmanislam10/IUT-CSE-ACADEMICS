#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n];

    int a_count = 0, d_count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]);

        if (arr[i] == 'A')
        {
            a_count++;
        }
        if (arr[i] == 'D')
        {
            d_count++;
        }
    }

    if (a_count > d_count)
    {
        printf("Anton");
    }
    else if (d_count > a_count)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }

    return 0;
}