#include "holberton.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14.
 * Return: Alwais 0 (susses)
 */

void more_numbers(void)
{
	int digit, line;

	for (line = 0; line < 10; line++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit > 9)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
		}

		_putchar('\n');
	}
}
