#include <stdio.h>

/**
 *main- print number of argument passed inside
 *@argc: number of args
 *@argv: an array of args
 *Return: if 0 success else fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
