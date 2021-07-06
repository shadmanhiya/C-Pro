#include<stdio.h>
#define pi 3.14
int main()
{
    float r, area, peri;
    printf("Enter the radius of the circle:");
    scanf("%f", &r);

    //formula for both area and perimeter

    area = pi * r * r;
    peri = 2 * pi * r;
    printf("The area of the circle: %.2f\n", area);
    printf("The perimeter of the circle: %.2f", peri);
    return 0;
}
