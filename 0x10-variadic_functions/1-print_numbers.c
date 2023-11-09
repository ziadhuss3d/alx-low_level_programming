#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print and separate numbers
 * @separator: the item to separate with
 * @n: the args count
 * @...: the ints to be printed
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(ap, int));
		if (j < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
