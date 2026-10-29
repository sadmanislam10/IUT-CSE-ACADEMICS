#include <bits/stdc++.h>

using namespace std;

int Iterative_binary_search(int x, int arr[], int n)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int Recursive_binary_search(int x, int arr[], int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return Recursive_binary_search(x, arr, low, mid - 1);
    }
    else
    {
        return Recursive_binary_search(x, arr, mid + 1, high);
    }
}

int main()
{
    int arr[1000];
    int value;
    int n = 0;

    while ((scanf("%d", &value)) == 1 && value >= 0)
    {
        arr[n++] = value;
    }

    int x;

    if ((scanf("%d", &x)) == 1)
    {
        cout << Iterative_binary_search(x, arr, n) << "(using iteration)" << "\n";
        cout << Recursive_binary_search(x, arr, 0, n - 1) << "(using recursion)" << "\n";
    }

    return 0;
}