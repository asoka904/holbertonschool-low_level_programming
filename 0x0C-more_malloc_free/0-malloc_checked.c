#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: Size of memory to allocate
 *
 * Return: Returns a pointer to the allocated memory. If malloc fails, the
 * malloc_checked function should cause normal process termination with a
 * status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == 0)
		exit(98);

	return (ptr);
}
