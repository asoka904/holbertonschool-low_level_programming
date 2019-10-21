#include "dog.h"

/**
 * print_dog - Print all the fields of a variable of type struct dog
 * @d: pointer to a dog struct to initialize
 *
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
