/* Computes the volume of a sphere 
 * 
 *
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float fourthird = (4.0f/3.0f), pi = M_PI, radius, volume;

    printf("Enter Sphere Radius: ");
    scanf("%f", &radius);

    volume = fourthird * pi * (radius * radius * radius);
    printf("%.4f\n", volume);
    
    return 0;
}
