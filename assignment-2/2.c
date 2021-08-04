#include<stdio.h>
int main()
{
    float escore1, escore2, escore3, avg;
    printf("Enter exam 1 marks:");
    scanf("%f", &escore1);
    printf("Enter exam 2 marks:");
    scanf("%f", &escore2);
    printf("Enter exam 3 marks:");
    scanf("%f", &escore3);

    avg = (escore1 + escore2 + escore3) / 3;

    printf("Your average mark is: %.2f\n", avg);

    if(avg >= 90 && avg <= 100)
        printf("Your marks is: %.2f. Your grade is: A", avg);
    else if(avg >= 70 && avg <= 89.99)
        printf("Your marks is: %.2f. Your grade is: B" , avg);
    else if (avg >= 50 && avg <= 69.99)
        printf("Your marks is: %.2f. Your grade is: C", avg);
    else if (avg < 50)
        printf("Your marks is: %.2f. Your grade is: F", avg);
    else
        printf("Invalid Number! Try again...");

    return 0;
}
