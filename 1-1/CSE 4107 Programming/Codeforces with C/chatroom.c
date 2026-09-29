#include <stdio.h>
#include <string.h>

int main()
{
    char word[101];
    scanf("%s", word);

    int len = strlen(word);
    int hcount = 0, ecount = 0, lcount = 0, ocount = 0;

    for (int i = 0; i < len; i++)
    {
        if (word[i] == 'h')
        {
            hcount++;
        }
        if (word[i] == 'e')
        {
            ecount++;
        }
        if (word[i] == 'l')
        {
            lcount++;
        }
        if (word[i] == 'o')
        {
            ocount++;
        }
    }

    if (hcount>1 && ecount>1 && lcount>2 && ocount>1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

    return 0;
}