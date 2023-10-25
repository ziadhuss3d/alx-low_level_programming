#include "main.h"

/**
 * factorial - return factorial of number passed in params
 * @n: number to get the factorial of
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
