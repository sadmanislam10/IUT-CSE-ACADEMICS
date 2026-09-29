#include <stdio.h>
#include <limits.h>

int main()
{
    int size;
    int max = INT_MIN, min = INT_MAX;
    int maxindex, minindex;
    scanf("%d", &size);

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        // for max
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }

        // for min
        if (arr[i] <= min)
        {
            min = arr[i];
            minindex = i;
        }
    }
    // printf("max: %d\nmax index: %d\nmin: %d\nminindex : %d", max,maxindex,min, minindex);

    int count1 = maxindex, count2 = size - 1 - minindex;
    int total = count1 + count2;

    if (maxindex>minindex)
    {
        total--;
    }

    printf("%d", total);

    return 0;
}