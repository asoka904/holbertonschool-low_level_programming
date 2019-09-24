#include "holberton.h"

/**
 * print_last_digit - Print the last digit of an integer.
 * Return: Return the last digit of an integer.
 */
int print_last_digit(int c)
{
	if (c < 0)
		c *= -1;
	_putchar((c % 10) + 48);
	return (c % 10);
}
