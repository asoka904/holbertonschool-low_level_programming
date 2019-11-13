#include "holberton.h"

/**
 * main - Program that copies the content of a file to another file.
 * @ac: Number of arguments
 * @av: Arguments of the function
 *
 * Return: 0 in success.
 */
int main(int ac, char **av)
{
	int forigin, fdest;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	forigin = open(av[1], O_RDONLY);
	if (forigin < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fdest = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fdest < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(forigin);
		exit(99);
	}

	return (0);
}
