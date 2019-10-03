#include "holberton.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: String to print.
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	for (len /= 2; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
