#include "main.h"

/**
 * malloc_checked -  memory allocate using malloc and exits if failed
 * @b: size to allocate
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
