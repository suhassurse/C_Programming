#include <stdio.h>

int main()
{
	int n,i,f1,f2,f3;

	printf("Enter no of terms");
	scanf("%d", &n);

	f1=0;
	f2=1;

	if(n>=1)
	{
		printf("\n%d", f1);
	}

	if(n>=2)
	{
		printf("\n%d", f2);
	}

	for(i=3;i<=n;i++)
	{
		f3=f1+f2;
		printf("\n%d", f3);

		f1=f2;
		f2=f3;
	}

}

