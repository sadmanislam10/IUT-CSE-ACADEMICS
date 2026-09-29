#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];

    scanf("%s", num);

    int len = strlen(num);

    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (num[i] == '4' || num[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 ||count == 7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}