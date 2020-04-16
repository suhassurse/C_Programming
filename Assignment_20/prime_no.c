#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,flag;
	printf("enter the number");
	scanf("%d",&n);

	flag=1;

	for(i=2;i<=(int)sqrt(n) && flag==1;i++)
	{
		if(n%i==0) flag=0;
	}


		if(flag==1)
		{
			printf("\n%d is the prime number",i);
		}
		else
		{
			printf("\n%d is not prime number");
		}

}
