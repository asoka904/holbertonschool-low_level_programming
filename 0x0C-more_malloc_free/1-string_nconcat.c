#include "holberton.h"

/**
 * string_nconcat - Concatenates two strings.
 * Description: Concatenates two strings in a new space of memory, using
 * only the first n bytes of the second string.
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to copy of s2
 *
 * Return: Pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i, j, sizeS1;

	if (s1 != NULL)
		sizeS1 = _strlen(s1);
	else
		sizeS1 = 0;

	ptr = malloc(sizeof(char) * (sizeS1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < sizeS1; i++)
		ptr[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; j < n && s2[j] != '\0'; i++, j++)
			ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}


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

