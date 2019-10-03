#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a terminating null byte.
 * @dest: First part of the string.
 * @src: Second part of the string, to append to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, cnt = 0;

	while (dest[len] != '\0')
		len++;

	do
	{
		dest[len] = src[cnt];
		len++;
		cnt++;
	} while (src[cnt] != '\0');

	return (dest);
}
