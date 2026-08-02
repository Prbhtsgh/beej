#include <stdio.h>

struct car {
	char *name;
	float price;
	int speed;
};

int main(void)
{
	struct car saturn = {.speed = 175, .name = "Saturn SL/2"};

	struct car *c = &saturn;
	printf("%p\n", *c);
}
