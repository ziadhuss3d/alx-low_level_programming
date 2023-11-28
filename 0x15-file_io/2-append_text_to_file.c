#include "main.h"

/**
 * append_text_to_file - added text at the OEF
 * @filename: file name
 * @text_content: to added at the EOF
 * Return: if success then 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int frwd, size, w_bytes;

	if (filename == NULL)
		return (-1);

	frwd = open(filename, O_WRONLY | O_APPEND);
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
