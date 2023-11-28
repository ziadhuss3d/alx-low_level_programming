#include "main.h"

/**
 * read_textfile - read and print a text file
 * @filename: the file to be readen
 * @letters: letter to read and print
 * Return: total read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t r_check, cnt;
	char *bf;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		free(bf);
		return (0);
	}

	r_check = read(f, bf, letters);
	if (r_check == -1)
		return (0);

	cnt = write(STDOUT_FILENO, bf, r_check);
	if (cnt == -1 || r_check != cnt)
		return (0);

	free(bf);

	close(f);

	return (cnt);
}
