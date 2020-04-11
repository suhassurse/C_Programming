#include <stdio.h>
int x[5][5];
int main()
{
   int row,col;
   for (row=0;row<4;row++)
   {
	   for(col=0;col<4;col++)
	   {
		   if(row>col)
			   x[row][col]=row;
		   else
		   	   x[row][col]=col;
	   }
   }

   for (row=0;row<4;row++)
      {
   	   for(col=0;col<4;col++)
   	   {
   		   printf("%4d",x[row][col]);
   	   }
   	   printf("\n\n");
      }

 }

