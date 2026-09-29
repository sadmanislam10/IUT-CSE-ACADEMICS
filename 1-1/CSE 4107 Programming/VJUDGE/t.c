// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--)
//     {
//         int segments;
//         scanf("%d", &segments);

//         if (segments == 4)
//         {
//             printf("11\n");
//         }

//         else if (segments % 3 == 0)
//         {
//             int x = segments / 3;

//             while (x--)
//             {
//                 printf("7");
//             }
//             printf("\n");
//         }

//         else if (segments % 3 == 2)
//         {
//             int y = segments / 3;
//             while (y--)
//             {
//                 printf("7");
//             }
//             printf("1\n");
//         }

//         else
//         {
//             int z = (segments / 3)-1;
//             while (z--)
//             {
//                 printf("7");
//             }
//             printf("11\n");
//         }

//         // else
//         // {
//         //     if (segments / 3 == 0)
//         //     {
//         //         printf("%d\n", segments / 3);
//         //     }
//         // }
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            int x = n / 2;

            while (x--)
            {
                printf("1");
            }
            printf("\n");
        }
        else
        {
            printf("7");
            int y = (n / 2) - 1;
            while (y--)
            {
                printf("1");
            }
            printf("\n");
        }
    }

    return 0;
}