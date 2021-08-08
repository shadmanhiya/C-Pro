#include <stdio.h>
#include <math.h>
int main()
{
    int a, x, result;
    printf("Enter a and x value: ");
    scanf("%d%d", &a, &x);

    result = pow(a,x);

    printf("The answer is: %d", result);

    return 0;

}
