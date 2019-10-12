#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it.
 * @argc: Number of arguments (including name of file).
 * @argv: Arguments of the function
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
