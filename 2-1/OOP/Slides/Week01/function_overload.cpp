#include <iostream>

using namespace std;

void cxchar(char ch = '*', int n = 10)
{
    for (int i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << "\n";
}

int main()
{

    cxchar();

    cxchar('=');

    cxchar('$', 6);

    // cxchar(20); // 20 goes as a char argument
    
    return 0;
}