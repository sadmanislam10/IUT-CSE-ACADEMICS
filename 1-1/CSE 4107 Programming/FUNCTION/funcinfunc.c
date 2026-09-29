// #include <stdio.h>

// void func2()
// {
//     printf("Hello!! This is from function02\n");
// }
// void func1()
// {
//     printf("This is from function01\n");
//     func2();
// }

// int main()
// {
//     func1();

//     return 0;
// }

// better approach than the upper one

#include <stdio.h>

void func1();
void func2();

int main()
{
    func1();

    return 0;
}

void func1()
{
    printf("This is from function1\n");
    func2();
}

void func2()
{
    printf("Hello!! This is from function2\n");
}