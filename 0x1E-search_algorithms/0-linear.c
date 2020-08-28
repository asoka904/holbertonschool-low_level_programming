#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: the value to search for
 *
 * Return: index where is found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
