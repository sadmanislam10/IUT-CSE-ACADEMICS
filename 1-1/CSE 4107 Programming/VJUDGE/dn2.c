#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int liftpostion, mypositon, i = 1;

    while (n--)
    {
        scanf("%d %d", &mypositon, &liftpostion);

        if (mypositon <= liftpostion)
        {

            int time = (liftpostion * 4) + 19;

            printf("Case %d: %d\n", i, time);
            i++;
        }

        else
        {
            int total = (mypositon - liftpostion) + mypositon;
            int time = (total * 4) + 19;
            printf("Case %d: %d\n", i, time);
            i++;
        }
    }

    return 0;
}