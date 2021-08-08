#include <stdio.h>
#include <math.h>

int main()
{
    int x, n, i, num = 1;
    float sum = 1.0, f = 1.0, d;

    printf("Enter the value of X and N: ");
    scanf("%d%d", &x, &n);



    for(i= 1; i <= n; i++)
        {
        d = pow(x,i);
        printf("Total x: %.2f\n", d);
        f = f * i;
        printf("factorial is: %.2f\n", f);
        sum = sum + d / f;
         }

    printf("Total sum: %.2f", sum);

  return 0;
}
