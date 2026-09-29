#include<iostream>
using namespace std;

int main()
{
    for (int  i = 0; i < 11; i++)
    {
        if ( i == 5)
        {
            continue; // this will skip i=5 part
        }

        cout << i << endl;
        
    }
    

    return 0; 

    
}