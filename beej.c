#include <stdio.h>



int my_strlen(char *s)
{
	char *j = s;

	while (*j != '\0')
		j++;

	return j - s;
}

int main(void)
{
	printf("%d\n", my_strlen("Hello, World!"));
}

