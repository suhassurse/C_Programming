#include <stdio.h>

int main()
{
	int i=300;
	int *p;

	p=&i;

	printf("\n\n\t &i=%x, i=%d, &p=%x, p=%x and *p=%d",&i,i,&p,p,*p);

	printf("\n\n\t &i=%X, i=%d, &p=%X, p=%X and *p=%d",&i,i,&p,p,*p);
}

