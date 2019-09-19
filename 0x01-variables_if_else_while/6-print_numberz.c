#include <stdio.h>

/**
 * main - Print the digits from 0 to 9.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmp;

	for (tmp = '0'; tmp <= '9'; tmp++)
		putchar(tmp);
	putchar('\n');

	return (0);
}
