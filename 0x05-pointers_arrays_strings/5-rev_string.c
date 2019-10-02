#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: Pointer to string.
 */

void rev_string(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	char *cp = malloc(c * sizeof(char));


	s--;
	while (c > 0)
	{
		_putchar(*s);
		s--;
		c--;
	}
	_putchar('\n');
}
