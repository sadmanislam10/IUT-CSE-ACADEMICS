#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> nums;

    int x;

    while (cin >> x)
    {
        nums.push_back(x); // adds one element at the end of the vector
    }

    int target = nums.back();

    nums.pop_back();

    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                cout << "[" << i << ", " << j << "]" << "\n";
                return 0;
            }
        }
    }


}