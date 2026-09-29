// char & string use cases and difference

// char for one character , for example - 'A', not for "Sadman"
// for "Sadman" , i have to use String


#include<stdio.h>

int main()
{
    char name = 'Sadman'; // this will show error coz sadman has six character...
    printf("%c \n", name);

    char name1[20] = "Sadman";
    printf("%s \n ", name1);


    return 0;
}