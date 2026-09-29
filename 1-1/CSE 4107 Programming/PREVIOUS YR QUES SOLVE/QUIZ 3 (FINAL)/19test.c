#include <stdio.h>

void f1(char *str)
{
    if (*str)
    {
        // f1(str + 1); // 7014-ESC

        // f1(str++); // infinite loop

        f1(++str);

        printf("%c", *str);
    }
}

int main()
{

    f1("CSE-4107");

    return 0;
}