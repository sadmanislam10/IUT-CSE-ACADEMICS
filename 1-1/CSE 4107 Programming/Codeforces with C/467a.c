#include <stdio.h>
int main()
{
    int n, people, capacity, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &people, &capacity);

        if ((capacity - people) >= 2)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}