#include <stdio.h>

int main()
{
	int n,d,revnum;

	printf("enter the digit");
	scanf("%d", &n);

	revnum=0;

	while(n!=0)
	{
		d=n%10;
		revnum=revnum*10+d;
		n=n/10;

		printf("\ncurrent digit is %d and revnum is %d",d,revnum);
	}

	printf("\nrevnum is %d",revnum);

}

