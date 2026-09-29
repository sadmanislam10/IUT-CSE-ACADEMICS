#include <stdio.h>
int main()
{
    int sum = 0, x;
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if (x == 1)
        {
            sum++;
        }
        if (x == -1 && sum > 0)
        {
            sum -= 1;
        }
        else 
    }

    return 0;
}