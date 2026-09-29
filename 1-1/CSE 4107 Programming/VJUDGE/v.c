#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // sorting--bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // checking sort
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

    // making new array of zeros
    int visited[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    int grp = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0)
        {
            grp++;

            for (int j = i; j < n; j++)
            {
                if (arr[j] % arr[i] == 0)
                {
                    visited[j] = 1; 
                }
            }
        }
    }

    printf("%d", grp);
    return 0;
}