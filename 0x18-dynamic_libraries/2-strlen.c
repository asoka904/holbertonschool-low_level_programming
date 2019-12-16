#include "holberton.h"

/**
 * _strlen - calculate the length of a string.
 * @s: String.
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
