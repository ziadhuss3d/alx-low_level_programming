#include <stdio.h>
#include <stdlib.h>

/**
 * main - the main func to check code
 *
 * @argc: args numbers
 * @argv: args array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, n;

	if (argc != 2)
		printf("Error\n"), exit(1);

	n = atoi(argv[1]);
	if (n < 0)
		printf("Error\n"), exit(2);

	for (j = 0; j < n; j++)
	{
		printf("%02hhx", ((char *)main)[j]);
		if (j < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
