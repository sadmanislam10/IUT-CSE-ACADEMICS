#include <iostream>
using namespace std;

int main()
{
    double temp;
    double answer;
    char unit;

    cout << "|||| TEMPERATURE CONVERSION ||||" << endl;
    cout << " C FOR  CELSIUS " << endl;
    cout << " F FOR FAHRENHEIT " << endl;
    cout << "Press C/c if you want to convert in Celsius" << endl;
    cout << "Press F/f if you want to convert in Fahrenhite" << endl;

    

    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        cout << "Enter the temperature in Celsius: " << endl;
        cin >> temp;
        answer = (temp * 1.8) + 32;
        cout << "The temperature in Fahrenhit is " << answer << endl;
    }

    else if (unit == 'C' || unit == 'c')
    {
        cout << "Enter the temperature in Fahrenhite: " << endl;
        cin >> temp;
        answer = (temp-32)*0.555;
        cout << "The temperature in Fahrenhit is " << answer << endl;
    }

    return 0;
}