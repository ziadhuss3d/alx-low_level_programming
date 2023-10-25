#include "main.h"

/**
 * _print_rev_recursion - print string in reverse order
 * @m: string to be printed
 */
void _print_rev_recursion(char *m)
{
	if (!*m)
		return;
	_print_rev_recursion(m + 1);
	_putchar(*m);
}
