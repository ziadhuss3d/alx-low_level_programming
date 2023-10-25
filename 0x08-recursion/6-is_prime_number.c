#include "main.h"

/**
 * is_prime_help - function to minimize code of is_prime_number
 * @n: number
 * @j: incrementer
 *
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_help(int n, int j)
{
	if (j == n)
		return (1);
	if (n % j == 0)
		return (0);
	return (is_prime_help(n, j + 1));
}

/**
 * is_prime_number - return 1 when input is prime number,
 * if none return 0
 * @n: number
 *
 * Return: 1 if n is prime number, if none 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_help(n, 2));
}
