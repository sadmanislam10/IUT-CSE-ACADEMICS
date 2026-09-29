#include <stdio.h>

int calculate_sum(int x, int y)
{
    return x + y;
}

int main()
{

    int sum[5];

    sum[0] = calculate_sum(2, 3);
    sum[1] = calculate_sum(5, 5);
    sum[2] = calculate_sum(10, 40);
    sum[3] = calculate_sum(25, 30);
    sum[4] = calculate_sum(25, 35);

    for (int i = 0; i < 5; i++)
    {
        printf("The total is %d\n", sum[i]);
    }

    return 0;
}