#include <stdio.h>

struct car {
	char *name;
	float price;
	int speed;
};

int main(void)
{
	struct car saturn = {.speed = 175, .name = "Saturn SL/2"};

	void set_price(struct car *c, float new_price);

	printf("Price: %f\n", saturn.price);
}
