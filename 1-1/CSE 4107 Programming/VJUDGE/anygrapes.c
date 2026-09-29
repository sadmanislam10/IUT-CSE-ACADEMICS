#include <stdio.h>
int main()
{
    int andrew, dmitry, michal;
    scanf("%d %d %d", &andrew, &dmitry, &michal);

    int green, purple, black;
    scanf("%d %d %d", &green, &purple, &black);

    if (green >= andrew)
    {
        if ((green + purple) >= (andrew + dmitry))
        {
            if ((green + purple + black) >= (andrew + dmitry + michal))
            {
                printf("YES");
            }
            else
            {
                printf("NO");
            }
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        printf("NO");
    }

    return 0;
}