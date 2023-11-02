#include <stdio.h>

/**
 * main - prints list of arguments received
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
