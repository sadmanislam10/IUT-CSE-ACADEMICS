#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

        char word1[4], word2[4];
    char temp;
    while (n--)
    {
        scanf("%s %s", &word1, &word2);

        temp = word1[0];
        word1[0] = word2[0];
        word2[0] = temp;

        printf("%s %s\n", word1, word2);
    }

    return 0;
}