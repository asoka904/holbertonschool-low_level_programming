#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: Array of integers to invert.
 * @n: Number of elements of the array.
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = tmp;
	}
}
