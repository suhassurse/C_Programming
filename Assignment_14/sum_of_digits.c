#include <stdio.h>

int main()
{
	int digit,x,sum;
	printf("enter the digit");
	scanf("%d",&digit);

	sum=0;

	while(digit!=0)
	{
		x=digit%10;

		sum=sum+x;

		digit=digit/10;


	}

	printf("sum of digit is %d", sum);
}

