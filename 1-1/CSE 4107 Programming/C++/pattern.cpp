 #include<iostream> // pera laglo
 using namespace std; 

 int main()
 {
    int num = 1;

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << num <<" ";
            num++;
        }

        cout << endl;
        
    }
    


    return 0;
 }