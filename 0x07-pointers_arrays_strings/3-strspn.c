#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: string to search coincidences
 * @accept: Substring to search in s
 *
 * Return: Number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\n'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}

	return (i);
}
