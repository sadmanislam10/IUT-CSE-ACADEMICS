#include <stdio.h>
int main()
{
    int age[] = {15, 20, 30, 10, 50};

    float avg, sum = 0;
    int len;

    len = sizeof(age) / sizeof(age[0]);

    for (int i = 0; i < len; i++)
    {
        sum += age[i];
    }

    avg = sum / len;

    printf("Total age %f\n", sum);
    printf("Average %f\n", avg);

    return 0;
}