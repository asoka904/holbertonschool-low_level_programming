#include "holberton.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: String.
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
