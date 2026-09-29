#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d%d", &M, &N);

    int max_area = M * N;
    int max_dominoes = max_area / 2;

    printf("%d", max_dominoes);

    return 0;
}