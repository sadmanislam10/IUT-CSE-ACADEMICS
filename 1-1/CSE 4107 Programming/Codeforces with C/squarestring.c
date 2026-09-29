#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char word[101];
    char word1[101], word2[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", word);

        int len = strlen(word);

        if (len % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            for (int j = 0; j < len / 2; j++)
            {
                word1[j] = word[j];
            }
            word1[len/2] = '\0'; // ******

            for (int j = len/2; j < len; j++)
            {
                word2[j-(len/2)] = word[j];
            }
            word2[len/2] = '\0'; // ******

            if (strcmp(word1, word2) == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}