#include <stdio.h>
int main()
{
    int Y, W;
    scanf("%d %d", &Y, &W);

    int max = Y;
    if (W >= max)
        max = W;

    int up = 6 - max + 1;

    float result = (up * 1.0) / 6;

    printf("%f", result);

    // if (result == 1.0)
    // {
    //     printf("1/1");
    // }
    // else if (result == 0.1)
    // {
    //     printf("1/6");
    // }
    // else if (result == 0.3)
    // {
    //     printf("1/3");
    // }
    // else if (result == 0.5)
    // {
    //     printf("1/2");
    // }
    // else if (result == 0.6)
    // {
    //     printf("2/3");
    // }
    // else if (result == 0.8)
    // {
    //     printf("5/6");
    // }

    return 0;
}