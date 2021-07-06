#include<stdio.h>
#define pi 3.14
int main()
{
    float d1, d2, h, area, volume;

    printf("Enter the Outer Diameter: ");
    scanf("%f", &d1);
    printf("Enter the Inner Diameter: ");
    scanf("%f", &d2);
    printf("Enter the height:");
    scanf("%f", &h);
    //formula for the surface area and volume of a flat washer
    area = pi * ((d1*d1) - (d2-d2));

    volume = area * h;
    printf("Surface Area of a flat washer: %.2f\n", area);
    printf("Volume of a flat washer: %.2f", volume);
    return 0;
}
