#include <stdio.h>
#include <limits.h>

typedef struct
{
    int mid, final, attendence;
    int quiz[4];

} Marks;

void func(Marks m)
{
    int min = INT_MAX;

    for (int i = 0; i < 4; i++)
    {
        if (m.quiz[i] < min)
        {
            min = m.quiz[i];
        }
    }
    int quiz_total = 0;
    for (int i = 0; i < 4; i++)
    {
        quiz_total += m.quiz[i];
    }

    int totalmarks = m.attendence + m.final + m.mid + quiz_total - min;

    float grade;

    grade = (float)totalmarks / 360 * 100.0;

    if (grade >= 80)
    {
        printf("A+\n");
    }
    else if (grade >= 70 && grade <= 79)
    {
        printf("A\n");
    }
    else if (grade >= 60 && grade <= 69)
    {
        printf("B\n");
    }
    else if (grade >= 50 && grade <= 59)
    {
        printf("C\n");
    }
    else if (grade >= 40 && grade <= 49)
    {
        printf("D\n");
    }
    else
    {
        printf("F");
    }
}

int main()
{
    Marks mark;

    printf("Enter midmarks, finalmarks, attendence:\n");

    scanf("%d %d %d", &mark.mid, &mark.final, &mark.attendence);

    printf("Enter quiz marks:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &mark.quiz[i]);
    }

    //    printf("%.2f %.2f %.2f\n", mark.mid, mark.final, mark.attendence);

    //    for (int i = 0; i < 4; i++)
    //    {
    //     printf("%.2f ", mark.quiz[i]);
    //    }

    func(mark);

    return 0;
}