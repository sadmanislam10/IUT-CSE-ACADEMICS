#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    int location = 1;

    for (int i = 1; i <= n; i += 2)
    {
        arr[location]=i;
        location++;
    }

    for (int i = 2; i <= n; i += 2)
    {
        arr[location]=i;
        location++;

    }

    printf("%d", arr[k]);

    return 0;
}