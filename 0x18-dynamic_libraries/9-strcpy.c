#include "holberton.h"
/**
  * _strcpy - Copies the string pointed to by src, including the terminating
  * null byte (\0), to the buffer pointed to by dest.
  * @dest: Destiny buffer.
  * @src: Pointer to origin string.
  * Return: the pointer to dest.
  */

char *_strcpy(char *dest, char *src)
{
	int count;

	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];

	dest[count] = '\0';

	return (dest);
}
