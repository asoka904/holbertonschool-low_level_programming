#include <stdio.h>

/**
 * main - Print the alphabet in lower case.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char tmp;

	for (tmp = 'a'; tmp <= 'z'; tmp++)
	{
		if (tmp != 'q' && tmp != 'e')
			putchar(tmp);
	}
	putchar('\n');

	return (0);
}
