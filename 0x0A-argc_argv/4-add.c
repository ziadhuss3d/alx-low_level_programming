#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum the positif numbers
 * @argc: number args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
