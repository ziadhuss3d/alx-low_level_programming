#include "main.h"

/**
 * _pow_recursion - return value of x with the power of y
 * @x: the number to be powred
 * @y: the power of the number
 *
 * Return: x in the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
