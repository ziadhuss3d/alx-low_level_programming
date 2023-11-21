#include "lists.h"

/**
 * print_listint - print items for listint_t
 * @z: head list pointer
 * Return: node numbers
 */
size_t print_listint(const listint_t *z)
{
	size_t cnt = 0;

	while (z)
	{
		printf("%d\n", z->n);
		z = z->next;
		cnt++;
	}
	return (cnt);
}
