#include <stdio.h>
int main()
{
    int marks[100], time[100], question[100];

    int n;

    printf("Number of questions: ");
    scanf("%d", &n);

    printf("Enter the Mark, Time, Ques NO :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &marks[i], &time[i], &question[i]);
    }

    printf("The Ques NO that will be answered:\n");
    for (int i = 0; i < n; i++)
    {
        if (marks[i] > 5 || time[i] <= 15)
        {
            printf("%d\n", question[i]);
        }
      
    }

    return 0;
}