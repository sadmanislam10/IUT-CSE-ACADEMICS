#include <stdio.h>
#include <stdlib.h>

int compare(void const *a, void const *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return y - x;
}
int main()
{
    int target;
    scanf("%d", &target);

    int arr[12];

    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, 12, sizeof(int), compare);

    // for (int i = 0; i < 12; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    int count = 0, monthcount = 0;

    for (int i = 0; i < 12; i++)
    {
        if (count < target)
        {
            count += arr[i];
            monthcount++;
            
        }
    }

    if (monthcount <= 12 && count >= target)
    {
        printf("%d", monthcount);
    }
    else
    {
        printf("-1");
    }

    return 0;
}