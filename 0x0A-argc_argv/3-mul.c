#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the result of 2 numbers multiple
 *@argc: number of args
 *@argv: array of args
 *Return: 0 when success else fail.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		return (printf("Error\n"), 1);

	return (0);
}
