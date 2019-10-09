#include "holberton.h"

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: Integer
 *
 * Return: the natural square root of a number. If n does not have a natural
 * square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	return (isroot(n, 0));
}

/**
 * isroot - Find the scuare root of a number.
 * Description: Check recursibely the root of an number, untul to find it if
 * it exist.
 * @n: number to find the root
 * @s: possible root (Optional)
 * Return: the root scuare of n. If it do not exist, return -1
 */
int isroot(int n, int s)
{
	if (n < 0)
		return (-1);
	
	if (n < s)
		return (-1);

	if (s * s == n)
		return (s);

	return (isroot(n, s + 1));
}
