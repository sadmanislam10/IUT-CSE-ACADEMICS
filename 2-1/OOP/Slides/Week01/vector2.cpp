#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> numbers = {1,2,3,4,5};

    for(int &num : numbers)
    {
        num = num*2;

        cout << num << endl;
    }

    return 0;
}
