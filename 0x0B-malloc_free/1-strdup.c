#include "holberton.h"
/**
 * _strdup - Duplicate a string
 * Description: Returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter. This can be freed whith
 * free().
 * @str: pointer to the string to duplicate
 *
 * Return: A pointer to the newly allocated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ptr;

	if (*str == '\0')
		return (NULL);

	while (str[size] != '\0')
		size++;
	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';

	return (ptr);
}
