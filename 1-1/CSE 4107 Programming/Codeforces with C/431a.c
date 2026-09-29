#include <stdio.h>
#include <string.h>

int main()
{
    int a1, a2, a3, a4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);

    char string[100001];

    scanf("%s", string);

    int len = strlen(string);
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        if (string[i] == '1')
        {
            sum += a1;
        }
        else if (string[i] == '2')
        {
            sum += a2;
        }
        else if (string[i] == '3')
        {
            sum += a3;
        }
        else if (string[i] == '4')
        {
            sum += a4;
        }
    }

    printf("%d", sum);

    return 0;
}