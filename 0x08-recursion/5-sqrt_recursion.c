#include "main.h"

/**
 * _sqrt_help - function to minimize code for _sqrt_recursion
 * @n: number
 * @i: incrementer
 *
 * Return:  square of n
 */
int _sqrt_help(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_help(n, i + 1));
}

/**
 * _sqrt_recursion - return the square of number
 * @n: number to get his square
 *
 * Return: square of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 0));
}
