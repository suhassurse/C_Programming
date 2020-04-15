#include <stdio.h>

int main()
{
	int n,d,num,revnum;


	for(n=100;n<=1000;n++)
	{
		revnum=0;
			num=n;

			while(num!=0)
			{
				d=num%10;
				revnum=revnum*10+d;
				num=num/10;


			}
			if(revnum==n)
				printf("\nthe palindrone number is %d",n);
	}



}

