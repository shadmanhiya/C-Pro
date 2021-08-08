#include<stdio.h>
int main()
{
  int i, j, k;

   for(i=1;i<=9;i++)
	{
		for(j=i;j<=9;j++)
		{
		    printf("*");
		}
		for(j=1;j<=(i*2-2);j++)
		{
            printf(" ");
		}
		for(j=i;j<=9;j++)
		{
            printf("*");
		}
		printf("\n");
	}

  for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
            printf("*");
		}
		for(j=1;j<=(9*2-i*2);j++)
		{
		    printf(" ");
		}
		for(j=1;j<=i;j++)
		{
            printf("*");
		}
		printf("\n");
	}

  return 0;
}
