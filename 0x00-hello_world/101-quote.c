#include <stdio.h>

/**
 * main - Print a quote on the standard error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char error[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	perror(error);
	return (1);
}
