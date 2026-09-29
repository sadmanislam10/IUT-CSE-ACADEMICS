#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch[101];
    scanf("%s", ch);

    for (int i = 65; i <= 91; i++)
    {
        if ((int)ch[0] == i)
        {
            printf("%s", ch);
        }

        else
        {
            printf("%s%s", toupper(ch[0]), ch);
        }
    }

    return 0;
}