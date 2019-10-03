#include "holberton.h"

/**
 * _strncpy - Copy a string.
 * Description: This function copy the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte. It will use at most n bytes from src; and src does
 * not need to be null-terminated if it contains n or more bytes
 * @dest: First part of the string.
 * @src: Second part of the string, to append to dest.
 * @n: Maximum number of bits to append of src.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len++;
	}

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}

	return (dest);
}
