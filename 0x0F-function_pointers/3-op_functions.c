#include "3-calc.h"

/**
 * op_add - sum integers
 * @a: first digit
 * @b: second digit
 *
 * Return: sum of them
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract integers
 * @a: first int
 * @b: second int
 *
 * Return: difference of them
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply integers
 * @a: first number
 * @b: second number
 *
 * Return: product of them
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide integers
 * @a: first int
 * @b: second int
 *
 * Return: result of division of them
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder of the division of ints
 */
int op_mod(int a, int b)
{
	return (a % b);
}
