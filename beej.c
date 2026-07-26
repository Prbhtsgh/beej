#include <stdio.h>

int main(void)
{
	int a;
	int *p;

	a = 10;

	p = &a;
	
	printf("address of %d is %p\n", a, p);
}
