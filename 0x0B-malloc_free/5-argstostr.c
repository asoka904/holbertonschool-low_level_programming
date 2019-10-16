#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, sizeStr = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = _strlen(av[i]);
		sizeStr += j;
		sizeStr++;
	}
	sizeStr++;

	str = malloc(sizeStr * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		_strcat(str, av[i]);
	}

	return (str);
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


/**
 * _strcat - This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then adds
 * a end of line.
 * @dest: First part of the string.
 * @src: Second part of the string, to append to dest.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, cnt = 0;

	while (dest[len] != '\0')
		len++;

	while (src[cnt] != '\0')
	{
		dest[len] = src[cnt];
		len++;
		cnt++;
	}
	dest[len] = '\n';
	dest[len + 1] = '\0';

	return (dest);
}

