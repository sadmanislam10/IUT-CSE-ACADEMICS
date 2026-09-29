#include <stdio.h>
typedef struct
{
    char name[20];
    int marks;
} Student;

int main()
{
    Student info[5];

    printf("Enter the student info(name & marks):\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. ", i + 1);
        scanf("%s %d", &info[i].name, &info[i].marks);
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (info[i].marks < info[j].marks)
            {
                Student temp;

                temp = info[i];
                info[i] = info[j];
                info[j] = temp;
            }
        }
    }

    printf("----The Result is descending order----\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s %d\n", info[i].name, info[i].marks);
    }

    return 0;
}