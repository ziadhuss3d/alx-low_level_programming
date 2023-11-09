#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings with separator
 * @separator: the item to separate with
 * @n: the args number
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *ch;
	va_list args;

	va_start(args, n);
	for (j = 0; j < n; j++)
	{
		ch = va_arg(args, char*);
		printf("%s%s", ch == NULL ? "(nil)" : ch,
			   (j < n - 1 && separator != NULL) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
