#include <stdio.h>

int min(int a, int b)
{
    return (a<b) ? a : b; // ternary-- returns a if a is smaller- else b
}
int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        int coder, mathematician, paglu;
        scanf("%d %d %d", &coder, &mathematician, &paglu);

        int totalby3 = (coder + mathematician + paglu) / 3;

        // int total = coder+mathematician+paglu;

        // TLE IN TEST 3 :/
        // while (coder > 0 && mathematician > 0 && total >= 3)
        // {
        //     count++;
        //     total = total - 3;
        //     coder--;
        //     mathematician--;
        // }

        printf("%d\n", min(min(coder,mathematician),totalby3));
    }

    return 0;
}