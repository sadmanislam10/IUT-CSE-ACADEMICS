#include <bits/stdc++.h>

using namespace std;

int iterative_binary_search(int x, int arr[], int n)
{
    int low = 0;
    int high = n;

    int mid = low + (high - low) / 2;

    while (high >= low)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = high + 1;
        }
    }
    return -1;
}

int recursive_binary_search(int x, int arr[], int low, int high)
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
        return recursive_binary_search(x, arr, low, mid - 1);
    }
    else
    {
        return recursive_binary_search(x, arr, mid + 1, high);
    }
}

int main()
{
    


    return 0;
}
