#include <stdio.h>

int main()
{
	int digit,x,sum;
	printf("enter the digit");
	scanf("%d",&digit);



	while(digit!=0)
	{
		sum=0;

		while(digit!=0)
			{
				x=digit%10;

				sum=sum+x;

				digit=digit/10;


			}

		if(sum>9)
			{
				digit=sum;
				sum=0;
			}
	}





	printf("sum of digit is %d", sum);
}

