#include "holberton.h"

/**
 * _calloc - Allocates memory for an array.
 * Description: Allocates memory for an array of nmemb elements of size bytes
 * each and the memory is set to zero.
 * @nmemb: Number of elements of the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory, or NULL if this fail.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
