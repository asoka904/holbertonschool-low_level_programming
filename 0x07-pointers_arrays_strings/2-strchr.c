#include "holberton.h"

/**
 * _strchr - Locates a character in a string.
 * @s: String to search
 * @c:Character to search
 *
 * Return: Pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
