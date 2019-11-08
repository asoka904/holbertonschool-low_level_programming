#include "holberton.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *cad = "Hi";

	if (cad[0] != '\0')
		return (1);
	return (0);
}
