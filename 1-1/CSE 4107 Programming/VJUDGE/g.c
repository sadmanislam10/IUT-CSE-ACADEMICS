#include <stdio.h> // pain
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], index[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        index[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++)

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                int temp2;   // painnnnnn
                temp2 = index[j]; 
                index[j] = index[j + 1];
                index[j + 1] = temp2;

                // swapping depends on the values of array...index vlaue is nto changing just swaping
            }
        }

    int step = n / 2;

    for (int i = 0; i < n / 2; i++)
    {
        printf("%d %d\n", index[i], index[n - 1 - i]);
    }

    return 0;
}