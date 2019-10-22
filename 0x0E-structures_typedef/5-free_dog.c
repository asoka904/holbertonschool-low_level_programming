#include "dog.h"

/**
 * free_dog - Free structs of type dog
 * @d: pointer to a dog to free
 *
 * Return: Pointer to a new dog_t
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
