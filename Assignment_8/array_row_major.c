#include <stdio.h>
int main()
{
   int x[4][4],row,col;
   for (row=0;row<4;row++)
   {
	   for(col=0;col<4;col++)
	   {
		   x[row][col]=(row*4+1)+col;
	   }
   }

   for (row=0;row<4;row++)
      {
   	   for(col=0;col<4;col++)
   	   {
   		   printf("%d",x[row][col]);
   	   }
   	   printf("\n\n");
      }

 }

