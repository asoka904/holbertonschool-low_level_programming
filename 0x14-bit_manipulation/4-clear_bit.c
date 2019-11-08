#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: number to print
 * @index: position of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask <<= index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
