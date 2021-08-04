#include<stdio.h>

int main()
{
    int year;

    printf("Enter a  year: ");
    scanf("%d", &year);

    if(year % 100 == 0 || year % 400 != 0)
        printf("Year %d is not a leap year..!!", year);
    else if(year % 4 == 0)
        printf("This %d year is leap year", year);
    else
        printf("Enter a correct year");

}

