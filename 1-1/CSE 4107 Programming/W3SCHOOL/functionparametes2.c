#include <stdio.h>
void func(char name[], int age)
{
    printf("My name is %s. ", name);
    printf("I am %d years old.\n", age);
}

int main()
{
    func("Sadman", 20);
    func("Niamul", 80);

    return 0;
}