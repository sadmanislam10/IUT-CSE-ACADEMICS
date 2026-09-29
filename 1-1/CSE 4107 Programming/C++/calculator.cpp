#include <iostream>
using namespace std;

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "**********CALCULATOR**********" << endl;
    cout << "********FOR TWO DIGITS********" << endl;

    cout << "Enter either (+ , -, *, / )" << endl;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Enter num1: " << endl;
        cin >> num1;

        cout << "Enter num2: " << endl;
        cin >> num2;

        cout << "The addition of num1 and num2 is " << num1 + num2 << endl;

        break;

    case '-':
        cout << "Enter num1: " << endl;
        cin >> num1;

        cout << "Enter num2: " << endl;
        cin >> num2;

        cout << "The subtraction of num1 and num2 is " << num1 - num2 << endl;

        break;

    case '*':
        cout << "Enter num1: " << endl;
        cin >> num1;

        cout << "Enter num2: " << endl;
        cin >> num2;

        cout << "The multiplication of num1 and num2 is " << num1 * num2 << endl;

        break;

    case '/':
        cout << "Enter num1: " << endl;
        cin >> num1;

        cout << "Enter num2: " << endl;
        cin >> num2;

        cout << "The addition of num1 and num2 is " << num1 / num2 << endl;

        break;

    default:

        cout << "Please enter from (+, -, *, /)" << endl;
        break;
    }

    return 0;
}