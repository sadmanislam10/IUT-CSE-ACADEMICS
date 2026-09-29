#include <iostream>
using namespace std;

int main()
{
    struct employee
    {
        int id;
        char code;
        float salary;
    };

    struct employee sadman;

    sadman.id = 10;
    sadman.code = 'M';
    sadman.salary = 10201;

    cout << sadman.id << endl;
    cout << sadman.code << endl;
    cout << sadman.salary << endl;

    return 0;
}
 