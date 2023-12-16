/* Computes the dimensional weight of a box from input provided by the user */ 

#include <stdlib.h>
#define INCHES_PER_POUND 166
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    if (scanf("%d", &height) != 1) {
        printf("Error: Invalid input\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter length of box: ");
    if (scanf("%d", &length) != 1) {
        printf("Error: Invalid input\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter width of box: ");
    if (scanf("%d", &width) != 1) {
        printf("Error: Invalid input\n");
        exit(EXIT_FAILURE);
    }
    volume = height * length * width;
    weight = (volume + INCHES_PER_POUND - 1) / 166;
    
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
