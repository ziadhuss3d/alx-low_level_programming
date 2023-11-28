#include "main.h"

/**
 * create_file - file to be created
 * @filename: the file name
 * @text_content: string to write into the file
 * Return: if success then 1
 */
int create_file(const char *filename, char *text_content)
{
	int frwd, size, w_bytes;

	if (filename == NULL)
		return (-1);

	frwd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (frwd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(frwd);
		return (1);
	}

	for (size = 0; text_content[size]; size++)
		;

	w_bytes = write(frwd, text_content, size);
	if (w_bytes == -1)
	{
		close(frwd);
		return (-1);
	}

	close(frwd);
	return (1);
}
