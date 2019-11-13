#include "holberton.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append
 * @text_content: content to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0;
	int writed = 0;
	int len;

	if (filename == NULL)
		return (0);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
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
