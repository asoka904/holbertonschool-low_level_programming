#include "holberton.h"

/**
 * array_range - Creates an array of integers.
 * Description: Creates an array of integers with al the values in range to
 * min to max (both included).
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Pointer to the array, or NULL if this fail.
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		ptr[i] = i + min;

	return (ptr);
}
