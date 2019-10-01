#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String.
 */

void print_rev(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	s--;
	while (c > 0)
	{
		_putchar(*s);
		s--;
		c--;
	}
	_putchar('\n');
}
