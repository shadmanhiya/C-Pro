#include<stdio.h>
int main() {
	int n,i;
	int sum=0;
	printf("Enter the n: ");
	scanf("%d",&n);
	printf("Sum of the series: ");
	for (i =1;i <= n;i++)
	{
	    sum = sum + i;
	    if(i != n)
	    printf("%d + ", i);
	    else
	    printf("%d = ", i);
	}
    printf("%d", sum);
	return 0;
}
