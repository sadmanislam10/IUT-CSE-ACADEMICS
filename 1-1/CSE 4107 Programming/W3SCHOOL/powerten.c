/*
This is done using the letter e (or E), which stands for "times 10 to the power of".

For example, 35e3 means 35 × 10³ = 35000.

*/

#include <stdio.h>

int main()
{
    double num1 = 10e2;

    float num2 = 5E3;

    printf("%lf \n", num1);  // lf for double, f for float
    printf("%f \n", num2);

    return 0;
}