#include<stdio.h>
int main()
{
    float l, w, area, peri;
    printf("Enter the legth:");
    scanf("%f", &l);
    printf("Enter the width:");
    scanf("%f", &w);
    area = l * w; //area of the rectangle
    peri= 2*(l+w); // perimeter of the rectangle
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f", peri);
    return 0;
}
