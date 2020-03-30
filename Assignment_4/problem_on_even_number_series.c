#include <stdio.h>
int main()
{
   int n,sum1,sum2,i;
   printf("Enter the number of terms :");
   scanf("%d",&n);

   sum1=0;
   for(int i=1;i<=n;i++)
   {
	   sum1=sum1+2*i;
   }
   printf("\nsum of first %d even terms with 1st method is %d",n,sum1);


   for(int i=2;i<=2*n;i+=2)
      {
   	   sum2=sum2+i;
      }
      printf("\nsum of first %d even terms with 2nd method is %d",n,sum2);
 }

