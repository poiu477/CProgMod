#include <stdio.h>

int main(void)
{
    float bal = 0.0f, rate = 0.0f, payment =0.0f, rateper;
    
    printf("Enter Loan Balance: ");
    scanf("%f", &bal);

    printf("Enter Interest Rate: ");
    scanf("%f", &rate);

    printf("Enter Monthly Payment: ");
    scanf("%f", &payment);

    rateper = rate / 100 /12;

    bal = bal - payment + (bal * rateper);
    printf("Balance remaining after first payment: $%0.2f\n", bal);

    bal = bal - payment + (bal * rateper);
    printf("Balance remaining after second payment: $%0.2f\n", bal);

    bal = bal - payment + (bal * rateper);
    printf("Balance remaining after third payment: $%0.2f\n", bal);
    
    return 0;
}
