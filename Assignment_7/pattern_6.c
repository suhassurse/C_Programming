#include <stdio.h>
int main()
{
   int n,i,j;
   printf("Enter the number of terms :");
   scanf("%d",&n);



   for(i=1;i<=n;i++)
   {
	   for(j=1;j<=(n-i);j++)
	   {
		   printf(".");
	   }
	   for(j=1;j<=(2*i-1);j++)
	   {
		   printf("%c",i+96);
	   }
	   printf("\n");
   }
 }

