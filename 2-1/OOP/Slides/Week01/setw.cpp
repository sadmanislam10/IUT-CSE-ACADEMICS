#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    long p1= 12345, p2=987, p3 = 43251;

    cout << setw(8) << "LOCATION" << setw(12) << "POPULATION" << endl;

    cout << setw(8) << "Dhaka" << setw(12) << p2 << endl;

    cout << left << setw(10) << "Dhaka" << setw(10) << "Khulna" << endl;
    // left e print hobe ... so right a gap

    cout << right << setw(10) << "Dhaka" << setw(10) << "Khulna" << endl;
    // right e print hobe so left a gap

    return 0;
}
