#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: String to print.
 */

void puts_half(char *str)
{
	int len = 0, bg;

	while (str[len] != '\0')
		len++;

	bg = len / 2;
	if (len % 2 != 0)
		bg++;

	while (str[bg] != '\0')
	{
		_putchar(str[bg]);
		bg++;
	}
	_putchar('\n');
}
