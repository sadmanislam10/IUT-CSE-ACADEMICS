#include <stdio.h>

struct structure
{
    int rank;
    char grade;
    char name[100];
};

int main()
{

    struct structure info = {10, 'A', "Sadman"};

    printf("%d\n%c\n%s\n", info.rank, info.grade, info.name);

    return 0;
}