#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and print the result
 * @argc: Number of arguments (including name of file)
 * @argv: Arguments of the function
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
