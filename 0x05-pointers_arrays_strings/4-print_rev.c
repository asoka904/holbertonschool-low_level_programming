#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String.
 */

void print_rev(char *s)
{
	char c = 0;

	while (*(s + c) != '\0')
		c++;

	while (c >= 0)
	{
		c--;
		_putchar(*(s + c));
	}

	_putchar('\n');
}
