#include <iostream>

using namespace std;

int main()
{
    // int n;

    // cin >> n;
    // cout << n;

    // int n;
    // cin >> n;

    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << "\n";

    // }

    // string str;

    // cin >> str;
    // cout << str;

    bool isodd;

    int n;

    cin >> n;

    if (n % 2)
    {
        isodd = true;
    }
    else
    {
        isodd = false;
    }

    if (isodd)
    {
        cout << "odd\n";
    }
    else
    {
        cout << "even\n";
    }
}