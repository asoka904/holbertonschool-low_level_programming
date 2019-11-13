#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: Name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int writed = 0;
	int readed = 0;
	int desc;

	if (filename == NULL)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	desc = open(filename, O_RDONLY, 600);
	if (desc == -1)
	{
		free(buf);
		return (0);
	}

	readed = read(desc, buf, letters);
	if (readed == -1)
	{
		free(buf);
		return (0);
	}

	writed = write(STDOUT_FILENO, buf, readed);
	if (writed == -1)
		return (-1);

	free(buf);
	close(desc);
	return (writed);
}

