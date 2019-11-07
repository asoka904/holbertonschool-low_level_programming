#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: number to extract the bit.
 * @index: position of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64)
		return (-1);

	mask = mask << index;
	if (n & mask)
		return (1);
	else
		return (0);
}
