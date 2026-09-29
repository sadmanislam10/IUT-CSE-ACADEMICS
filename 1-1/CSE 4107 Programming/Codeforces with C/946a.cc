#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int sum = 0, num;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        sum += abs(num);
    }

    cout << sum ;

    return 0;
}