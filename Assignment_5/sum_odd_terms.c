#include <stdio.h>
int main()
{
   int n,sum2,i;
   printf("Enter the number of terms :");
   scanf("%d",&n);


   sum2=0;
   for(i=1;i<=2*n;i+=2)
      {
   	   sum2=sum2+i;
      }
      printf("\nsum of first %d odd terms is %d",n,sum2);
 }

