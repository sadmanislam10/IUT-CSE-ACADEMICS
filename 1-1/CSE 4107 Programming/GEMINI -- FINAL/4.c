#include <stdio.h>

typedef struct
{
    int id;
    float cg;
} Student;

int main()
{
    FILE *fp = fopen("student.txt", "w");

    Student info[3];

    printf("Enter three students id and cg\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %f", &info[i].id, &info[i].cg);
    }

    for (int i = 0; i < 3; i++)
    {
        if (info[i].cg >= 3.5)
        {
            fprintf(fp, "Id: %d, CG: %.2f\n", info[i].id, info[i].cg);
        }
    }

    fclose(fp);

    return 0;
}