#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {5, 2, 16, 32, 2, 4552};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}