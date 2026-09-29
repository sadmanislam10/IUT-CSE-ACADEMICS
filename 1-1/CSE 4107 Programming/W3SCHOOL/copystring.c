#include <stdio.h>
#include <string.h>

int main()
{
    char txt1[20] = "Sadman";
    char txt2[20];

    strcpy(txt2, txt1);
    printf("%s\n", txt2);

    return 0;
}