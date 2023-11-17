#include "lists.h"
#include "stdio.h"

/**
 * print_list - print the elements in list_t
 * @z: pointer into head of list
 *
 * Return: nodes number
 */
size_t print_list(const list_t *z)
{
	size_t f = 0;

	while (z)
	{
		if (z->str)
			printf("[%u] %s\n", z->len, z->str);
		else
			printf("[0] (nil)\n");
		z = z->next;
		f++;
	}
	return (f);
}
