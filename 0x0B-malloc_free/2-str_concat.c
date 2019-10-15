#include "holberton.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Pointer to a newly allocated space in memory which contains the
 * contents of s1, followed by the contents of s2, and null terminated, or
 * NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, size1 = 0, size2 = 0;
	char *ptr;

	if (s1 == NULL)
		size1 = 0;
	else
		while (s1[size1] != 0)
			size1++;
	if (s2 == NULL)
		size2 = 0;
	else
		while (s2[size2] != 0)
			size2++;

	ptr = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		ptr[i] = s1[i];
	for (; i < size2 + size1; i++)
		ptr[i] = s2[i - size1];
	ptr[i] = '\0';

	return (ptr);
}
