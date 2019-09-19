#include <stdio.h>

/**
 * main - Print the alphabet in lower case.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char tmp;

	for (tmp = 'z'; tmp >= 'a'; tmp--)
		putchar(tmp);
	putchar('\n');

	return (0);
}
