#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * Description: Searches in an array an integer that meets a condition.
 * @array: Array of integers to search
 * @size: Size of the array
 * @cmp: Function that indicate the condition
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if((*cmp)(array[i]) != 0)
			return (i);
	return (-1);
}
