#include <stdio.h>

void func(int *secondelement[20])
{
    printf("Second Element of each Row:\n \n");

    for (int i = 0; i < 20; i++)
    {
        printf("Row %d-- 2nd Element is %d\n", i, secondelement[i][1]);
    }
}

int main()
{
    int arr[20][100];

    int *ar2[20];

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            arr[i][j] = (i * 100) + j;
        }
    }

    for (int i = 0; i < 20; i++)
    {
        ar2[i] = arr[i];
    }

    func(ar2);

    return 0;
}