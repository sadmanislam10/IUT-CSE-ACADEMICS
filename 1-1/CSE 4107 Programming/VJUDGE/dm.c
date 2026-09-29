#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);

    // for (int i = 1; i <= test; i++)
    // {

    //     int numof_operations;
    //     scanf("%d", &numof_operations);

    //     numof_operations = numof_operations + (numof_operations / 2);

    //     char donate[10], report[10];
    //     int amount, result = 0;
    //     while (numof_operations--)
    //     {
    //         printf("Case %d:\n", i);
    //         scanf("%s %d %s", &donate, &amount, &report);

    //         if (strstr(report, "report") != NULL)
    //         {
    //             result += amount;
    //             printf("%d\n", result);
    //         }
    //     }
    // }

    for (int i = 1; i <= test; i++)
    {
        int n;
        scanf("%d", &n);

        char command[20];
        int amount, total = 0;

        printf("Case %d:\n", i);

        while (n--)
        {
            scanf("%s", command);
            if (strcmp(command, "donate") == 0)
            {
                scanf("%d", &amount);
                total += amount;
            }

            else if (strcmp(command, "report") == 0)
            {

                printf("%d\n", total);
            }
        }
    }

    return 0;
}