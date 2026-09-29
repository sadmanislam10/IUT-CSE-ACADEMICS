#include <stdio.h>

int sumofarray(int arr[], int size)

{

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()

{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = sumofarray(arr, n);

    printf("%d", result);


    return 0;
}