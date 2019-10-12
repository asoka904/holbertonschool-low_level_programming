#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
