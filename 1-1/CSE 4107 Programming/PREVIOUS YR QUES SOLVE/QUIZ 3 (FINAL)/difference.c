#include <stdio.h>

int func(int arr1[], int size1, int arr2[], int size2)
{
    int total_sum = 0;

    for (int i = 0; i < size1; i++)
    {
        total_sum += arr1[i];
    }

    int given_index_sum = 0;
    for (int i = 0; i < size2; i++)
    {
        int index = arr2[i];

        given_index_sum += arr1[index];
    }

    int left_sum = total_sum - given_index_sum;

    int result = left_sum - given_index_sum;

    printf("%d", result);
}
int main()
{
    int size1;
    scanf("%d", &size1);

    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int size2;
    scanf("%d", &size2);

    int arr2[size2];

    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    func(arr1, size1, arr2, size2);

    return 0;
}