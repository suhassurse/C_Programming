#include <stdio.h>

int main()
{
	int a,b,c;
	int my_input(void);
	int my_add(int,int);
	void my_display(int,int,int);

	a=my_input();
	b=my_input();

	c=my_add(a,b);

	my_display(a,b,c);


}

int my_input() {
	int data;

	printf("\nEnter a number");
	scanf("%d",&data);
	return (data);
}

void my_display(int d1,int d2,int re) {
	printf("addition of %d and %d is %d",d1,d2,re);
}

int my_add(int x,int y) {
	int result;
	result=x+y;
	return(result);
}

