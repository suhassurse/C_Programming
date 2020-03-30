#include <stdio.h>
int main()
{
   int n,sum,i;// variable declaration
   printf("Enter the number of terms :");
   scanf("%d",&n);

   sum=0;
   for(int i=1;i<=n;i++)  // outer loop
   {
	   sum=sum+i;
   }
   printf("\nsum of first %d terms is %d",n,sum);
 }

