#include "holberton.h"

/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, i = 0;

	dif = n ^ m;
	while (dif)
	{
		if (dif & 1)
			i++;
		dif >>= 1;
	}
	return (i);
}
