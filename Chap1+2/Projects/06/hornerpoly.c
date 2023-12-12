/* Evaluates a polynomial, based on a given value of x using Horner's Polynomial algorithm*/

#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a value for X: ");
    scanf("%f", &x);
    printf("%.5f", ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);

    return 0;
}
