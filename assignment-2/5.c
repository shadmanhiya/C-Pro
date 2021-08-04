#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, c, z, root1, root2;

    //three number user input
    printf("Enter three number for root value.\n");
    printf("Enter a number:");
    scanf("%f", &a);
    printf("Enter a number:");
    scanf("%f", &b);
    printf("Enter a number:");
    scanf("%f", &c);

    //calculating b*b - 4 * a * c and assigning into z

    z = ((b * b) - (4 * a * c));

    printf("Difference: %.2f\n", z);

    if(z == 0)
    {
        root1 = -b / (2 * a);
        printf("The root is: %.2f", root1);
    }

    else if (z < 0)
        printf("There are no real root");
    else
    {
        root1 = (-b + (sqrt(z)/(2 * a)));
        printf("First root value is: %.2f\n", root1);

        root2 = (-b - (sqrt(z)/(2 * a)));
        printf("Second root value is: %.2f", root2);
    }
    return 0;
}
