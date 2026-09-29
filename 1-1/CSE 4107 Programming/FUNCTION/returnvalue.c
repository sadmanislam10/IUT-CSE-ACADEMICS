// #include <stdio.h>

// // used void before..that doesnt return any value
// // now we will use int function that will return a vaue

// int add(int x)
// {
//     return x + 5;
// }

// int main()
// {
//     printf("%d", add(10));

//     return 0;
// }

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    printf("%d", add(5, 3));

    return 0;
}