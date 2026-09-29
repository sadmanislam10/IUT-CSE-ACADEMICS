#include <stdio.h>

int func(int ar1[], int n1, int ar2[], int n2)
{
    int totalsum = 0, indexsum = 0;

    for (int i = 0; i < n1; i++)
    {
        totalsum += ar1[i];
    }

    for (int i = 0; i < n2; i++)
    {
        int index = ar2[i];

        indexsum += ar1[index];
    }

    return (totalsum - (2 * indexsum));
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    int ar1[n1], ar2[n2];

    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &ar1[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &ar2[i]);
    }

    int res = func(ar1, n1, ar2, n2);

    printf("%d", res);

    return 0;
}