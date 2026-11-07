#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (int num : numbers) // for num in numbers
    {
        cout << num << " ";
    }

    cout << "\n";

    return 0;
}
