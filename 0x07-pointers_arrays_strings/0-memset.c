#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: the address of memory to fill.
 * @b: character to print in memory
 * @n: number of bytes of memory to print.
 *
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
