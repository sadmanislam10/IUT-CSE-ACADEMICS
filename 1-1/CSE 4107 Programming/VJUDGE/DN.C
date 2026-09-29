#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int liftpostion, mypositon, i = 1;

    while (n--)
    {
        scanf("%d %d", &mypositon, &liftpostion);

        int time = (liftpostion * 4) + 19;

        printf("Case %d: %d", i, time);
        i++;
    }

    return 0;
}