#include "holberton.h"

/**
 * is_prime_number - Check if an integer is prime number
 * @n: Integer
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
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
