#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer to a dog struct to initialize
 * @name: name field for the dog
 * @age: Actually age of the dog
 * @owner: Owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
