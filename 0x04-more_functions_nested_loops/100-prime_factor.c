#include "holberton.h"

/**
 * main - Finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
	long int fuck = 612852475143;
	long int last, i;

	for(i = 3; i <= (fuck / 3); i += 2)
	{
		if (fuck % i == 0)
			last = i;
	}
	printf("%li\n", last);

	return (0);
}
