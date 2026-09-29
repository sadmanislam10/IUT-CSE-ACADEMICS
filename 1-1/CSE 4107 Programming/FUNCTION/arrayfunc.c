#include <stdio.h>

void array(int marks[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", marks[i]);
    }
}

int main()
{

    int marks[5] = {80, 33, 90, 45, 50};

    array(marks);

    return 0;
}