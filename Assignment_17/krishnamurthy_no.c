#include <stdio.h>

int main()
{
	int n,d,sum,num,fact,i;

	for(n=1;n<=1000;n++) {
		sum=0;
		num=n;

		while(num!=0) {
			d=num%10;
			fact=1;

			for(i=1;i<=d;i++)
				fact=fact*i;


			sum=sum+fact;
			num=num/10;
		}
		if(n==sum)
			printf("\n%d is the krishnamurthy number",n);
	}

}

