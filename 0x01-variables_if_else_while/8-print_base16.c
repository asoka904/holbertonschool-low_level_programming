#include <stdio.h>

/**
 * main - Print the alphabet in lower case.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char tmp;

	for (tmp = '0'; tmp <= '9'; tmp++)
		putchar(tmp);
	for (tmp = 'a'; tmp <= 'f'; tmp++)
		putchar(tmp);
	putchar('\n');

	return (0);
}
