#include <stdio.h>
int main()
{
    printf("Enter 9 digit student id\n");
    int id;
    scanf("%d", &id);

    char filename[50];

    for (int i = 0; i < 5; i++)
    {
        sprintf(filename, "%d.jpg", id);
        printf("%s\n", filename);
        id++;
    }

    return 0;
}