/* Computes final price with 5 percent sales tax*/

#include <stdio.h>

int main(void)
{
    float amnt;

    printf("Enter an amount: ");
    scanf("%f", &amnt);
    printf("With Tax Added: %.2f\n", amnt * 1.05f);
    
    return 0;
}
