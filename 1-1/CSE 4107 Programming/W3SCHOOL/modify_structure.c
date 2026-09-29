// modify elements in structure

#include <stdio.h>
#include<string.h>

struct structure
{
    int age;
    char grade;
    char name[100];
};

int main()
{

    struct structure info = {20, 'A', "Messi"};

    info.age = 10;
    info.grade = 'B';
    strcpy(info.name , "Sadman");

    printf("%d\n%c\n%s\n", info.age, info.grade, info.name);

    return 0;
}