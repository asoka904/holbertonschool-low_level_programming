#include "holberton.h"
/**
 * create_array - Creates an array of chars, and initializes it with a specific
 * char.
 * @size: size of the buffer to create
 * @c: Character to print in the buffer
 *
 * Return: Pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return (0);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
