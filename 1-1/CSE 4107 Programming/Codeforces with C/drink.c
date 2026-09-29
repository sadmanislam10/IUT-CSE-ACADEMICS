#include <stdio.h>
int main()
{
    int n, vol;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vol);

        int sum = 0;

        sum = vol + vol;

        printf("%d", vol);
    }

    return 0;
}