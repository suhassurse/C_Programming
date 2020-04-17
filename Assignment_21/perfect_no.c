#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,sum;
	for(n=2;n<=1000;n++)
	{
		sum=1;
		for(i=2;i<sqrt(n);i++)
		{
			if(n%i==0)
				sum=sum+i+n/i;

		}
		if(sqrt(n)==(int)sqrt(n))
			sum=sum+(int)sqrt(n);

		if(n==sum)
			printf("\n%d is the perfect number",n);
	}
}

