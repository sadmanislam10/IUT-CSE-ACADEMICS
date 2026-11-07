#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> price(n);

        for (int i = 0; i < n; i++)
        {
            cin >> price[i];
        }

        int min_value = price[0];
        int maxProfit = 0;

        for (int i = 1; i < n; i++)
        {
            int current_profit = price[i] - min_value;

            maxProfit = max(maxProfit, current_profit);

            min_value = min(min_value, price[i]);
        }

        cout << maxProfit << endl;
    }

    return 0;
}