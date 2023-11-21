#include "lists.h"

/**
 * print_listint - print items for listint_t
 * @h: head list pointer
 * Return: node numbers
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
