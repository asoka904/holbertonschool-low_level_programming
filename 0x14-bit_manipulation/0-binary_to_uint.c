#include "holberton.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, i = 0, mult = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		if (b[i] == '0' || b[i] == '1')
			i++;
		else
			return (0);
	for (; i; i--)
	{
		if (b[i - 1] == '1')
			count += mult;
		mult *= 2;
	}

	return (count);
}
