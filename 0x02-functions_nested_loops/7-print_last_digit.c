#include "holberton.h"

/**
 * print_last_digit - Print the last digit of an integer.
 * @c: Integer to extract the last digit.
 * Return: Return the last digit of an integer.
 */
int print_last_digit(int c)
{
	int digit;

	if (c < 0)
		digit = (c * -1) % 10;
	else
		digit = c % 10;

	_putchar(digit + 48);
	return (digit);
}
