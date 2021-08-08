#include<stdio.h>
int main()
{
  int i, j, k;

  for(int i=1; i<=9; i++)
  {
     for(int j=i; j<=9; j++)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==(2*i-1)) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  for(int i=9-1; i>=1; i--)
  {
     for(int j=9; j>=i; j--)
     {
       printf(" ");
     }
     for(int k=1; k<=2*i-1; k++)
     {
       if(k==1 || k==2*i-1) printf("*");
       else printf(" ");
     }
     printf("\n");
  }

  return 0;
}
