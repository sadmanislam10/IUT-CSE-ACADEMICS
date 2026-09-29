#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    if (argc == 1)
    {
        printf("Error! Plz provide your name\n");
    }
    else
    {
        printf("Welcome to exam, %s\n", argv[1]);
    }

    return 0;
}