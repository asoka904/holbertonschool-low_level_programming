#include "holberton.h"

/**
 * _realloc - Changes the size of the memory block
 * @ptr: Pointer to the old block of memory
 * @old_size: original size of the block of memory
 * @new_size: New size
 *
 * Return: Pointer to the new space of memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new = NULL;
/*	char *auxSrc = ptr;
	char *auxDest = new;
	unsigned int i;
*/
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);


	return (new);
}
