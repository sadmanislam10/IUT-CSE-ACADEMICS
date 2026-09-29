#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int m, c, mishka = 0, chris = 0, draw = 1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &c);
        if (m > c)
        {
            mishka++;
        }
        else if (c > m)
        {
            chris++;
        }
    }
    if (mishka > chris)
    {
        printf("Mishka");
    }
    else if (chris > mishka)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }

    return 0;
}