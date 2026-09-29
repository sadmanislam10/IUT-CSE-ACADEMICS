#include <stdio.h>

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    // int sum1 = sum(1, 3);
    // int sum2 = sum(5, 4);
    // int sum3 = sum(9, 10);

    // printf("%d\n%d\n%d\n", sum1, sum2, sum3);

    int arr[3];

    arr[0] = sum(1, 2);
    arr[1] = sum(2, 3);
    arr[2] = sum(3, 4);

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}