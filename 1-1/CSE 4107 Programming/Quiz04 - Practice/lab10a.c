#include <stdio.h>
#include <string.h>

char *firstrep(char word[][31], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(word[i], word[j]) == 0)
            {
                return word[i];
            }
        }
    }

    return NULL;
}
int main()
{
    int row;
    scanf("%d", &row);

    char words[row][31];

    for (int i = 0; i < row; i++)
    {
        scanf("%s", words[i]);
    }

    char *x = firstrep(words, row);

    if (x == NULL)
    {
        printf("-1");
    }
    else
    {
        printf("%s", x);
    }

    return 0;
}