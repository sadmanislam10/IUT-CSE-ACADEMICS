#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int res;

    if (argc != 4)
    {
        printf("Error!! Number of input is not correct\n");
        return 1;
    }

    if (argv[2][0] == '+') // will it be argv[2][0]??
    {
        res = atoi(argv[1]) + atoi(argv[3]);
    }

    if (argv[2][0] == '-')
    {
        res = atoi(argv[1]) - atoi(argv[3]);    
    }

    printf("%d", res);

    return 0;
}