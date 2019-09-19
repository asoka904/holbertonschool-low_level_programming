#include <stdio.h>

/**
 * main - Print the digits from 0 to 9.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int tmp;

	for (tmp = '0'; tmp <= '9'; tmp++)
	{
		putchar(tmp);
		if (tmp == '9')
			break;
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
