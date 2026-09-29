#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char word[11] = "codeforces";
    char x[11];

    while (n--)
    {
        int count = 0;

        scanf("%s", x);

        for (int i = 0; i < 10; i++)
        {
            if (word[i] != x[i])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}