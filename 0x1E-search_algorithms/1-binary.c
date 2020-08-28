#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: input
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index of the value, or -1 if doesn't exist
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int start, mid, end, i;

	if (array == NULL)
		return (-1);
	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);

		mid = (start + end) / 2;
		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
