#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])

{
    int n = atoi(argv[1]);

    FILE *fp;
    char ch;

    // printf("%s", __FILE__);

    for (int i = 0; i < n; i++)
    {

        fp = fopen(__FILE__, "r");

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        printf("\n\n");
    }

    fclose(fp);

    return 0;
}