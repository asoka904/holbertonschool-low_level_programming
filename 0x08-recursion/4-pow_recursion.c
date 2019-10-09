#include "holberton.h"

/**
 * _pow_recursion - Calculate the value of x raised to the power of y.
 * @x: base
 * @y: power
 *
 * Return: x raised to the power of y. If y is lower than 0, the function
 * return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
