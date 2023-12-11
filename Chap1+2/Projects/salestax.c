/* Computes final price with 5 percent sales tax*/

#include <stdio.h>

int main(void)
{
    float amnt, tax = 1.05f, total;

    printf("Enter an amount: ");
    scanf("%f", &amnt);
    total = amnt * tax;
    printf("With Tax Added: %.2f\n", total);
    
    return 0;
}
