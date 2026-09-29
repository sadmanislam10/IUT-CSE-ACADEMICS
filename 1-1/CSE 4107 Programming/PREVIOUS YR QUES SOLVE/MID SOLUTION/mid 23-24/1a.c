#include <stdio.h>
int main()
{

    float n1, n2;
    float ans;
    char x;

    scanf("%f ", &n1);

    scanf("%c ", &x);

    scanf("%f", &n2);

    switch (x)
    {
    case '+':
        ans = 1.0 * (n1 + n2);
        printf("%.2f", ans);
        break;

    case '-':
        ans = 1.0 * (n1 - n2);
        printf("%.2f", ans);
        break;

    case '*':
        ans = 1.0 * (n1 * n2);
        printf("%.2f", ans);
        break;

    case '/':
        ans = 1.0 * (n1 / n2);
        printf("%.2f", ans);
        break;

    default:
        printf("Invalid Operation");
    }

    return 0;
}