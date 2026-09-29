// #include <stdio.h>

// void func(int n)
// {
//     int temp = n;
//     if (n > 0)
//     {
//         printf("%d+", n);
//         func(n - 1);
//     }

//     return;

//     // if (n > 0)
//     // {
//     //     func(n - 1);
//     //     printf("%d+", n);
//     // }
//     // return;
// }

// void func2(int n)
// {
//     if (n > 0)
//     {
//         func(n - 1);
//         printf("%d+", n);
//     }
//     return;
// }
// int main()
// {
//     int n;
//     // scanf("%d", &n);

//     func(3);
//     func2(3);

//     return 0;
// }

#include <stdio.h>

int func(int n)
{
    if (n == 1)
    {
        printf("1"); // eta 1 print korbe
        return 1;    // ques is -- 1 to emnei print howar kotha but hobe  na coz ami to
        // return value the kothao store kori nai..exp: int x = func() erokom kichu korle hoto
    }

    printf("%d+", n);

    int sum = func(n - 1);

    printf("+%d", n);

    return n + sum + n;
}
int main()
{

    int r = func(3);

    printf("\n%d", r);
    return 0;
}