#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: Number of arguments (including name of file).
 * @argv: Arguments of the function
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
