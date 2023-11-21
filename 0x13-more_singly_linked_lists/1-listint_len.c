#include "lists.h"

/**
 * listint_len - get item numbers in listint_t
 * @z: head list pointer
 * Return: item number in list
 */
size_t listint_len(const listint_t *z)
{
	size_t cnt = 0;

	while (z)
	{
		cnt++;
		z = z->next;
	}
	return (cnt);
}
