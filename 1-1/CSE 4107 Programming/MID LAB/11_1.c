// #include <stdio.h>
// int main()
// {
//     int input;
//     scanf("%d", &input);

//     int numsq;

//     for (int i = 1; i < 1000000000; i++)
//     {
//         numsq = i * i;

//         if (numsq > input && (numsq - input) > 0)
//         {
//             printf("%d", numsq);
//             break;
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int function(int input)
{
    int numsqr;

    for (long long i = 1; i < 1000000000; i++)
    {
        numsqr = i * i;

        if (numsqr > input)
        {
            printf("%d", numsqr);
            break;
        }
    }
}
int main()
{
    int input;
    scanf("%d", &input);

    function(input);

    return 0;
}