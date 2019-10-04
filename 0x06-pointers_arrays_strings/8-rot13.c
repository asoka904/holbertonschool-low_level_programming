#include "holberton.h"

/**
 * rot13 - Encodes a string into 1337.
 * @s: String in natural language (without encode).
 *
 * Return: Pointer to the string encoded.
 */
char *rot13(char *s)
{
	char src[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dest[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == src[j])
			{
				s[i] = dest[j];
				break;
			}

	return (s);
}
