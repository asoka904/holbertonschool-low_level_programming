#include "holberton.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers.
 * @a: Matrix of integers.
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sA = 0, sB = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sA += a[(i + (size * j))];
			if ((i + j) == (size - 1))
				sB += a[i + (size * j)];
		}
	}
	printf("%i, %i\n", sA, sB);
}
