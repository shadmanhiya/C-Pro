#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Input three numbers.\n");
    printf("Enter First Number:");
    scanf("%f", &a);
    printf("Enter Second Number:");
    scanf("%f", &b);
    printf("Enter Third Number:");
    scanf("%f", &c);

    if(a > b && a>c)
        printf("The Greatest number is: %.2f\n", a);
    else if(b> a && b > c)
        printf("The Greatest number is: %.2f\n", b);
    else
        printf("The Greatest number is: %.2f\n", c);

    if(a < b && a < c)
        printf("The Smallest number is: %.2f", a);
    else if(b < a && b < c)
        printf("The Smallest number is: %.2f", b);
    else
        printf("The Smallest number is: %.2f", c);
    return 0;
}
