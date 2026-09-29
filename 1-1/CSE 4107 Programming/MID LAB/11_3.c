// // WITHOUT FUNCTION

// #include <stdio.h>
// int main()
// {
//     int n, r;
//     scanf("%d %d", &n, &r);

//     int n_exc = 1;

//     for (int i = n; i >= 1; i--)
//     {
//         n_exc = n_exc * i;
//     }

//     int r_exc = 1;

//     for (int i = r; i >= 1; i--)
//     {
//         r_exc = r_exc * i;
//     }

//     int range = n - r;
//     int n_minus_r_exc = 1;

//     for (int i = range; i >= 1; i--)
//     {
//         n_minus_r_exc = n_minus_r_exc * i;
//     }

//     int nCr, nPr;

//     nCr = n_exc / (r_exc * n_minus_r_exc);

//     nPr = n_exc / n_minus_r_exc;

//     printf("%d\n%d", nCr, nPr);

//     return 0;
// }


// WITH FUNCTION
#include <stdio.h>

void function(int n, int r)
{
    int n_exc = 1;

    for (int i = n; i >= 1; i--)
    {
        n_exc = n_exc * i;
    }

    int r_exc = 1;

    for (int i = r; i >= 1; i--)
    {
        r_exc = r_exc * i;
    }

    int range = n - r;
    int n_minus_r_exc = 1;

    for (int i = range; i >= 1; i--)
    {
        n_minus_r_exc = n_minus_r_exc * i;
    }

    int nCr, nPr;

    nCr = n_exc / (r_exc * n_minus_r_exc);

    nPr = n_exc / n_minus_r_exc;

    printf("%d\n%d", nCr, nPr);
}
int main()
{
    int n, r;
    scanf("%d %d", &n, &r);

    function(n, r);

    return 0;
}