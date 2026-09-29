#include<iostream>
using namespace std;

int c = 45; //working as global  c

int main() 
{
    int a=5 , b=6, c;

    c = a + b;

    cout << c << endl; // calling c= a+b;
    cout << ::c ; // calling global c

    return 0;
}