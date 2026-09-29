// pointer = a data type which holds the address of other data types

#include <iostream>
using namespace std;

int main()
{
    int a = 3;   

    int *b = &a;

    // * = Dereference operator
    // & = Address of (operator)

    cout << "The address of a is  " << b << endl;
    cout << "The address of a is " << &a << endl;
    // both prints the same thing

    cout << "The value at address b is " << *b << endl;
    // also.... * =  Value at operator

    // pointer to pointer (adressing the address of a pointer)
    int **c = &b;
    cout << "The address of b is " << c << endl;
    cout << "The address of b is " << &b << endl;

    return 0;
}