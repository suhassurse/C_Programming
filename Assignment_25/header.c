#include <stdio.h>
#include "header_file.h"

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


