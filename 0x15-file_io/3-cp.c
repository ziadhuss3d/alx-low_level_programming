#include "main.h"

/**
 * main - entry point
 * description: copy the file content into another
 * @argc: args of numbers
 * @argv: args of array
 * Return: if success then 0
 */
int main(int argc, char *argv[])
{
	int frwd_from, frwd_to, r_bytes, w_bytes;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	frwd_from = open(argv[1], O_RDONLY);
	if (frwd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	frwd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (frwd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r_bytes = read(frwd_from, buffer, 1024)) > 0)
	{
		w_bytes = write(frwd_to, buffer, r_bytes);
		if (w_bytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(frwd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frwd_from), exit(100);

	if (close(frwd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", frwd_to), exit(100);

	return (0);
}
