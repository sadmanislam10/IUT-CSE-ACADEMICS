#include<stdio.h>

void func(char name[])
{
    printf("Hello %s\n", name);
}

int main()
{
    func("Sadman");
    func("Tanvir");
    func("Niamul");
    func("Ridom");

    /*
    When a parameter is passed to the function, it is called an argument.
    So, from the example above: name is a parameter, while Liam, Jenny and Anja are arguments.
    */
   

   return 0;
}