#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int col, line;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < n; line++)
	{
		for (col = 0; col < line; col++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
