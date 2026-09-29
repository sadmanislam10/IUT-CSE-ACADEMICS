// #include <stdio.h>
// #include <math.h>

// void func(float n)
// {
//     float square = n * n;
//     float sqr_root = sqrt(n);

//     printf("%.2f %.5f", square, sqr_root);
// }

// int main()
// {
//     float num;
//     scanf("%f", &num);
//     func(num);

//     return 0;
// }

// the upper code prints correctly but the ques asked return both value..so i can use only one return

// #include <stdio.h>
// #include <math.h>

// // float func(float n, float square, float sqr_rt)
// float func(float n)
// {
//     float square = n * n;
//     float sqr_rt = sqrt(n);

//     return square, sqr_rt;

// }

// int main()
// {
//     float num;
//     scanf("%f", &num);

//     float x = func(num);

//     printf("%.2f,%.5f", sqrt, sqrt);

//     return 0;
// }

// uporer tao hudai ..cholbe na

#include <stdio.h>
#include <math.h>

float func(float n, float *squre, float *sqr_rt)
{
    *squre = n * n;
    *sqr_rt = sqrt(n);
}

int main()
{
    float num;
    float s, sr;
    scanf("%f", &num);

    func(num, &s, &sr);

    printf("%.2f %.5f", s, sr);
    return 0;
}