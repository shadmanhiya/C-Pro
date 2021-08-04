#include<stdio.h>
int main()
{
    float salary, base_tax, total_tax;
    printf("Enter the salary: ");
    scanf("%f", &salary);

    if(salary > 0 && salary < 15000)
        printf("You have no tax!!");

    else if(salary>= 15000 && salary < 30000)
    {
        base_tax = 2250.00;
        total_tax = 2250.00 + ((base_tax * 18)/100);
        printf("Total Tax is: %.2f", total_tax);
    }
    else if(salary>= 30000 && salary < 50000)
    {
        base_tax = 5400.00;
        total_tax = 5400.00 + ((base_tax * 22)/100);
        printf("Total Tax is: %.2f", total_tax);
    }
    else if(salary>= 50000 && salary < 80000)
    {
        base_tax = 11000.00;
        total_tax = 11000.00 + ((base_tax * 27)/100);
        printf("Total Tax is: %.2f", total_tax);
    }
    else if(salary>= 80000 && salary < 150000)
    {
        base_tax = 21600.00;
        total_tax = 21600.00 + ((base_tax * 33)/100);
        printf("Total Tax is: %.2f", total_tax);
    }
    else
        printf("Enter valid salary to know the tax!!");
    return 0;

}
