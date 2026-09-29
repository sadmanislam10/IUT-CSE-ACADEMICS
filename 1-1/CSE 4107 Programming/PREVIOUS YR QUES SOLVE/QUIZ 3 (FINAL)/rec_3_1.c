#include <stdio.h>

void f1(char *str)
{
    if (*str)
    {
        f1(str++); // loop choltei thakbe,,function e bar bar
        // f1(cse-4107 ei ashte thake tai)
        printf("%c", *str);
    }
}

int main()
{
    f1("CSE-4107");

    return 0;
}