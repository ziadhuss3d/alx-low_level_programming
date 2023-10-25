#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @m: string to be calculated
 * Return: length of the string
 */
int _strlen_recursion(char *m)
{
	if (*m == '\0')
		return (0);
	return (1 + _strlen_recursion(m + 1));
}
