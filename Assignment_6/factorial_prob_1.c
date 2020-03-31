#include <stdio.h>
int main()
{
   int n,sum,factorial,i,j;
   printf("Enter the number of terms :");
   scanf("%d",&n);


   sum=0;
   for(i=1;i<=n;i++)
      {
	   factorial=1;
	   for(j=1;j<=i;j++)
	   {
		   factorial=factorial*j;
	   }
   	   sum=sum+factorial;
      }
      printf("\nsum of first %d! factorial terms is %d",n,sum);
 }

