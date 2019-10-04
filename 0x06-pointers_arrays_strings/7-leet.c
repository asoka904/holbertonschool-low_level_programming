#include "holberton.h"

/**
 * leet - Encodes a string into 1337.
 * @s: String in natural language (without encode).
 *
 * Return: Pointer to the string encoded.
 */
char *leet(char *s)
{
	char src[] = "aAeEoOtTlL";
	char dest[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == src[j])
			{
				s[i] = dest[j];
				break;
			}

	return (s);
}
