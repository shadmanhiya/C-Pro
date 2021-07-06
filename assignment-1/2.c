#include<stdio.h>
int main()
{
    float b, h, area;
    printf("Enter the base:");
    scanf("%f", &b);
    printf("Enter the height:");
    scanf("%f", &h);

    area = 0.5 * b * h; // formula to calculate the area of triangle

    printf("Area of the triangle: %.2f", area);
    return 0;
}
