#include <stdio.h>
#include<string.h>

int main()
{
    int x;
    int a = 0;

    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        char instruction[10];
        scanf("%s", instruction);

        if (strcmp(instruction, "++X") == 0 || strcmp(instruction, "X++") == 0)
        {
            a++;
        }

        else if (strcmp(instruction, "--X") == 0 || strcmp(instruction, "X--") == 0)
        {
            a--;
        }
    }
    printf("%d\n", a);

    return 0;
}