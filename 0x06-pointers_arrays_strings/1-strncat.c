#include "holberton.h"

/**
 * _strncat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte.It will use at most n bytes from src; and src does
 * not need to be null-terminated if it contains n or more bytes
 * @dest: First part of the string.
 * @src: Second part of the string, to append to dest.
 * @n: Maximum number of bits to append of src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, cnt = 0;

	while (dest[len] != '\0')
		len++;

	while (src[cnt] != '\0' && cnt < n)
	{
		dest[len] = src[cnt];
		len++;
		cnt++;
	}

	dest[len] = '\0';

	return (dest);
}
