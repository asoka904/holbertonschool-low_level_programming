#include "holberton.h"

/**
 * factorial - Calculate the factorial of a given number.
 * @n: integer
 *
 * Return: Factorial of n. If n is negative, return -1.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
