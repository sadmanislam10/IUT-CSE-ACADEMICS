#include<iostream>
using namespace std;

// function definition
void printHello()
{
    cout << "Hello";
}

// another func definition
int sum (int a , int b)
{
    int sum = a+b;
    return sum;

}


int main()
{
    // function call 
    printHello();

    cout << " " << sum(10,5) << endl;

    return 0;
}