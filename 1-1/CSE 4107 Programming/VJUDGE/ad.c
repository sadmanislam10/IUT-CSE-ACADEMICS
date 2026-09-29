#include <stdio.h>
#include <stdlib.h>

// answer is either 1 or 2..alwayss

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int team = 1;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[i] - arr[j]) == 1)
                {
                    team = 2;
                }
            }
        }
        printf("%d\n", team);
    }

    return 0;
}