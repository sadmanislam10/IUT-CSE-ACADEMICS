#include <stdio.h>
#include <string.h>

struct structure
{
    int no;
    char category;
    char name[100];
};

int main()
{

    struct structure info;

    info.no = 10;
    info.category = 'A';
    strcpy(info.name, "Muhtasim"); //strcpy(destination, source);

    printf("%d\n", info.no);
    printf("%c\n", info.category);
    printf("%s\n", info.name);

    return 0;
}