#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char store[n][11];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", store[i]);
    }

    int flag1 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)

        {

            if ((strcmp(store[i], store[j]) == 0))
            {
                flag1 = 0;
                break;
            }
        }
    }

    int flag2 = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int len1 = strlen(store[i]);

        if (store[i][len1 - 1] != store[i+1][0])
        {
            flag2 = 0;
            break;
        }
    }

    if (flag1+flag2 == 2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}