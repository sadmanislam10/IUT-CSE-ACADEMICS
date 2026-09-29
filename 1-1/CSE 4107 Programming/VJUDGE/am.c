// #include <stdio.h>
// int main()
// {
//     int h, l;
//     // scanf("%lf %lf", &h, &l);
//     scanf("%d %d", &h, &l);

//     double result;
//     result = ((double)(l * l) - (double)(h * h)) / (2.0 * h); // age multiplicaton hocchilo then convert..but boro num er khetre int hishebe age gun hocchilo so tai error dekhacchilo...tai (double)x*x eibhabe use korte hobe

//     printf("%.12f\n", result);

//     return 0;
// }

// #include <stdio.h>

#include<stdio.h>

void solve() 
{
    int h_i, l_i;
    scanf("%d %d", &h_i, &l_i);

    double a = (((double)l_i*l_i) - ((double)h_i*h_i)) / (2.0 * h_i);
    printf("%.12f\n", a);
}

int main() {
    solve();
    return 0;
}