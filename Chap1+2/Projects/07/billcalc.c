#include <stdio.h>

int main(void)
{
    int dollars, remain, twenties, tens, fives, ones;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    
    twenties = dollars / 20;
    remain = dollars - (twenties * 20);
    tens = remain / 10;
    remain = remain - (tens * 10);
    fives = remain / 5;
    remain = remain - (fives * 5);
    ones = remain / 1;
    
    printf("\n$20 dollar bills: %d\n", twenties);
    printf("$10 dollar bills: %d\n", tens);
    printf("$5 dollar bills: %d\n", fives);
    printf("$1 dollar bills: %d\n", ones);

    return 0;
}
