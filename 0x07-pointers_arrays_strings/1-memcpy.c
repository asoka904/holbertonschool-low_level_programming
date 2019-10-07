#include "holberton.h"

/**
 * _memcpy - Copies memory area.
 * @dest: memory area of destiny
 * @src: memory area of origin
 * @n: number of bytes to copy
 *
 * Return: Pointer to the memory area of destiny
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (s);
}
