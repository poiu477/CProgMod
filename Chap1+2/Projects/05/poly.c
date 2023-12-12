/* Evaluates a polynomial, based on a given value of x*/

#include <stdio.h>

int main(void)
{
    float x;
    printf("Enter a value for X: ");
    scanf("%f", &x);
    printf("%.5f", 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6);

    return 0;
}
