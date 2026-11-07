#include<iostream>
#include<string>

using namespace std;

struct info
{
    int id;
    string name;
    float balance;
};

int main()
{
    info info01;

    info01.id = 107;
    info01.name = "Sadman";
    info01.balance = 1231.413;

     cout << "ID: " << info01.id << "\n" << "Name: " << info01.name << "\n" << "Balance: " << info01.balance << endl;



    return 0;
}
