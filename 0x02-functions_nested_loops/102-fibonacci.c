#include <stdio.h>

/**
 * main - Print fibonacci series.
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long n, first, second, sum;

	first = 2;
	second = 1;
	sum = 3;
	n = 2;
	printf("1, 2, ");
	while (n <= 50)
	{
		printf("%lu", sum);
		if (n == 49)
			break;
		printf(", ");

		second = first;
		first = sum;
		sum = first + second;
		n++;
	}
	putchar('\n');

	return (0);
}
