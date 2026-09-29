#include <stdio.h>
int main()
{
    int upvote, downvote, unknown;
    scanf("%d %d %d", &upvote, &downvote, &unknown);

    int totalup = upvote + unknown;
    int totaldown = downvote + unknown;

    if (upvote > totaldown)
    {
        printf("+\n");
    }
    else if (downvote > totalup)
    {
        printf("-\n");
    }

    else if (upvote == downvote && unknown == 0)
    {
        printf("0\n");
    }

    else
    {
        printf("?\n");
    }

    return 0;
}