#include "holberton.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: String of the first number.
 * @n2: String of the second number.
 * @r: Buffer that the function will use to store the result.
 * @size_r: Buffer size.
 *
 * Return: Pointer to the string encoded.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0;
	int sum = 0;

	while (n1[i] != '0')
		i++;
	while (n2[j] != '0')
		j++;

	while (size_r > 0)
	{
		if (i > 0)
		{
			i--;
			sum += (n1[i] - '0');
		}
		if (j > 0)
		{
			j--;
			sum += (n2[j] - '0');
		}
		size_r--;
		r[size_r] = (sum % 10) + '0';
		sum /= 10;

		if ((i == 0 && j == 0) && sum == 0)
		{
			r += size_r;
			return (r);
		}
	}

	if (sum > 0 || (i > 0 || j > 0))
		r = 0;

	return (r);
}
