#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int indexfromfirst = 0, indexfromlast = n - 1, s = 0, d = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (arr[indexfromfirst] > arr[indexfromlast])
            {
                s += arr[indexfromfirst];
                indexfromfirst++;
            }
            else
            {
                s += arr[indexfromlast];
                indexfromlast--;
            }
        }

        else
        {
            if (arr[indexfromfirst] > arr[indexfromlast])
            {
                d += arr[indexfromfirst];
                indexfromfirst++;
            }
            else
            {
                d += arr[indexfromlast];
                indexfromlast--;
            }
        }
    }

    printf("%d %d", s, d);

    return 0;
}