#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int totaloword, alaphabets;

    while (n--)

    {

        scanf("%d %d", &totaloword, &alaphabets);

        int frequency;

        char x = 'a';

        frequency = totaloword / alaphabets;

        for (int i = 0; i < alaphabets; i++)
        {
            for (int j = 0; j < frequency; j++)
            {
                printf("%c", x);
            }
            x++;
        }

        int left = totaloword % alaphabets;

        for (int i = 0; i < left; i++)
        {
            printf("%c", 'a');
        }

        printf("\n");
    }

    return 0;
}