#include "main.h"

/**
 * _puts_recursion - print string with new line
 * @m: data to print
 */
void _puts_recursion(char *m)
{
	if (!*m)
	{
		_putchar('\n');
		return;
	}
	_putchar(*m);
	_puts_recursion(m + 1);
}
