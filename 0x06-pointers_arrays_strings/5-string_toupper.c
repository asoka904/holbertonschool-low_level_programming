#include "holberton.h"

/**
 * string_toupper - hanges all lowercase letters of a string to uppercase.
 * @s: Pointer to the input string
 *
 * Return: Pointer to the string changed.
 */
char *string_toupper(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= 'a' && s[len] <= 'z')
			s[len] -= ' ';
		len++;
	}
	return (s);
}
