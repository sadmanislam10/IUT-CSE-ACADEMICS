#include <stdio.h>
#include <stdlib.h>

int main(int n, char *s[])
{
    int times = atoi(s[1]);
    FILE *fp;

    for (int i = 0; i < times; i++)
    {

        fp = fopen(__FILE__, "r");

        char ch;

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        printf("\n\n");
    }
    return 0;
}