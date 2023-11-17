#include "lists.h"

/**
 * list_len - the number of items in linked list_t
 * @z: head of list pointer
 *
 * Return: nodes number
 */
size_t list_len(const list_t *z)
{
	size_t f = 0;

	while (z)
	{
		z = z->next;
		f++;
	}
	return (f);
}
