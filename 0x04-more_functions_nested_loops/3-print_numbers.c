#include "holberton.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9.
 * Return: Alwais 0 (susses)
 */

void print_numbers(void)
{
	int digit;
	
	for (digit = '0'; digit <= '9'; digit++)
		_putchar(digit);
	_putchar('\n');
}
