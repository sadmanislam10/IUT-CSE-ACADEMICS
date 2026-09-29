#include <stdio.h>

void f1(char *str)
{
    if (*str)
    {

        f1(str + 1);
        printf("%c", *str);
        f1(str + 1);
    }
}
int main()
{
    f1("ABC");

    return 0;
}