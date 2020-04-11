#include <stdio.h>
int x[5][5];
int main()
{
   int row,col;
   for (row=0;row<5;row++)
   {
	   for(col=0;col<5;col++)
	   {
		   if(row==col)
			   x[row][col]+=10;
		   if(col==4-row)
		   	   x[row][col]+=20;
	   }
   }

   for (row=0;row<5;row++)
      {
   	   for(col=0;col<5;col++)
   	   {
   		   printf("%4d",x[row][col]);
   	   }
   	   printf("\n\n");
      }

 }

