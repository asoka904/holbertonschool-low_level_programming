#include "holberton.h"

/**
 * _strstr - Locates a substring.
 * @haystack: String to searching
 * @needle: substrind to find in haystack
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p = NULL;

	for (i = 0; haystack[i] != '\n'; i++)
	{
		if (haystack[i] == needle[0])
			p = compare((haystack + i), needle);
		if (p != NULL)
			return (p);
	}

	return (NULL);
}

char *compare(char *s1, char *s2)
{
	int i;

	/* OJO: si s1 llega al final y s2 no!! */
	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
		if (s1[i] != s2[i])
		{
			return (NULL);
		}
	return (s1);
}
