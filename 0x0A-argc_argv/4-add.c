#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 * @argc: Number of arguments (including name of file)
 * @argv: Arguments of the function
 * Return: 0 if success, 1 in otherwise
 */
int main(int argc, char *argv[])
{
	if (argc == 1){
		printf("Error\n");
		retur (0);
	}
	
	for (i = 1; i < argc; i++)
		while (argv[i][j] =! '\0')
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

	return (0);
}
