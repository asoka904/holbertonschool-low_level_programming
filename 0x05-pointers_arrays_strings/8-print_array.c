#include "holberton.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Array of integers
 * @n: Number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", *(a + i));
		(i == n - 1) ? printf("\n") : printf(", ");
	}
}
