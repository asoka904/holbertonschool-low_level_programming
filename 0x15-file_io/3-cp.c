#include "holberton.h"

/**
 * main - Program that copies the content of a file to another file.
 * @ac: Number of args
 * @av: Arguments of the function
 *
 * Return: 0 in success.
 */
int main(int ac, char *av[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}
