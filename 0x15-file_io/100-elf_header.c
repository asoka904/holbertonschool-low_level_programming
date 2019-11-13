#include "holberton.h"

/**
 * main - displays the information contained in the ELF header at the start of
 * an ELF file.
 * @ac: Number of parameters
 * @av: Parameters of the function
 *
 * Return: 0 in success
 */
int main(int ac, char **av)
{
	int file, txt, idClose;
	Elf64_Ehdr *buf;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: error in # of args\n");
		exit(98);
	}

	file = open(av[1], O_RDONLY);
	if (file < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	buf = malloc(sizeof(Elf64_Ehdr));
	if (buf == NULL)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	txt = read(file, buf, sizeof(Elf64_Ehdr));
	if (txt < 0)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	free(buf);
	idClose = close(file);
	if (idClose)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}

	return (0);
}
