// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int testcases;
//     scanf("%d", &testcases);

//     int initial, final, network, radius;

//     while (testcases--)
//     {
//         scanf("%d %d %d %d", &initial, &final, &network, &radius);

//         int distance_plus = network + radius;
//         int distance_minus = network - radius;

//         int result_ini_1, result_ini_2;
//         int sum = 0;

//         result_ini_1 = abs(distance_plus - initial);
//         result_ini_2 = abs(distance_minus - initial);

//         if (result_ini_1 > result_ini_2)
//         {
//             sum += result_ini_2;
//         }
//         else
//         {
//             sum += result_ini_1;
//         }

//         int result_final_1 = abs(distance_plus - final);
//         int result_final_2 = abs(distance_minus - final);

//         if (result_final_1 > result_final_2)
//         {
//             sum += result_final_2;
//         }
//         else
//         {
//             sum += result_final_1;
//         }

//         printf("%d\n", sum);
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int testcases;
    scanf("%d", &testcases);

    int initial, final, network, radius;

    while (testcases--)
    {
        scanf("%d %d %d %d", &initial, &final, &network, &radius);

        
    }

    return 0;
}