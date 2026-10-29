#include <bits/stdc++.h>

using namespace std;

int main()
{
    int position[1000];

    string value[1000], result[1000];

    int n = 0, p;

    while (cin >> p && p >= 0)
    {
        position[n++] = p;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    for (int i = 0; i < n; i++)
    {
        result[position[i] - 1] = value[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}