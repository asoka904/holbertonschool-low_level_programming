#include "holberton.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 0, mask = 1, cpy = n;

	if (n == 0)
	{
		_putchar(48);
		return;
	}

	for (; cpy; i++)
		cpy >>= 1;
	mask <<= --i;
	while (mask)
	{
		if (n & mask)
			_putchar(49);
		else
			_putchar(48);
		mask >>= 1;
	}
}
