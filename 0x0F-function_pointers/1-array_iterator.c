#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of
 * an array.
 * @array: Array of elements to use in the function action
 * @size: size of the array
 * @action: Pointer to the function to use in each element of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
