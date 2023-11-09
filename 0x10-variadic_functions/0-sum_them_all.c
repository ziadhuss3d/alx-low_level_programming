#include "variadic_functions.h"

/**
 * sum_them_all - get the sum of all params
 * @n: params count
 * Return: params total
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;
	int total = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (j = 0; j < n; j++)
		total += va_arg(ap, int);
	va_end(ap);

	return (total);
}
