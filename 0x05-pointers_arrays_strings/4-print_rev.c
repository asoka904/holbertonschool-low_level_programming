#include "holberton.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: String.
 */

void print_rev(char *s)
{
	int c = 0;

	while (*(s + c) != '\0')
		c++;
	do {
		_putchar(*(s + c));
		c--;
	} while (c >= 0);

	_putchar('\n');
}
