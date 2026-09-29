#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    char arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &arr[i]); // wasted time
    }

    int count = 0;

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}