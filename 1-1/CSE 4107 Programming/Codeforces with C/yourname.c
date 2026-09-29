#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int len;
    while (n--)
    {
        scanf("%d", &len);
        char name1[len+1], name2[len+1];

        scanf(" %s", name1);
        scanf(" %s", name2);

        if (strstr(name2, name1) != NULL)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
       
        
    }

    return 0;
}