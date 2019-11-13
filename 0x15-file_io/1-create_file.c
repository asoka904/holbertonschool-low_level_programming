#include "holberton.h"
/**
 * create_file - creates a file.
 * @filename: Name of the file to create
 * @text_content: content towrite in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file = 0;
	int writed = 0;
	int len;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		writed = write(file, text_content, len);
		if (writed < 0)
			return (-1);
	}

	close(file);
	return (1);
}
